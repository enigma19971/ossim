#include <oms/ImageModel.h>
#include <ossim/imaging/ossimImageGeometry.h>
#include <ossim/imaging/ossimImageHandlerRegistry.h>
#include <ossim/imaging/ossimImageHandler.h>
#include <ossim/projection/ossimProjection.h>
#include <ossim/projection/ossimProjectionFactoryRegistry.h>
#include <ossim/projection/ossimRpcModel.h>
#include <ossim/projection/ossimPositionQualityEvaluator.h>
#include <ossim/elevation/ossimHgtRef.h>
#include <ossim/base/ossimEcefPoint.h>
#include <ossim/base/ossimString.h>
#include <ossim/base/ossimColumnVector3d.h>
#include <ossim/matrix/newmat.h>

#include <ossim/elevation/ossimElevManager.h>


class oms::ImageModel::PrivateData
{
public:
   virtual ~PrivateData()
   {
      theImageHandler = 0;
      theImageGeometry = 0;
      theBoundingRect.makeNan();
   }
   ossimRefPtr<ossimImageHandler> theImageHandler;
   ossimRefPtr<ossimImageGeometry> theImageGeometry;
   
   ossimDrect theBoundingRect;
};



oms::ImageModel::ImageModel()
:thePrivateData(new PrivateData())
{
}
oms::ImageModel::~ImageModel()
{
   if(thePrivateData)
   {
      delete thePrivateData;
      thePrivateData = 0;
   }
}

ossimImageGeometry* oms::ImageModel::getGeometry()
{
   if(thePrivateData)
   {
      return thePrivateData->theImageGeometry.get();
   }

   return 0;
}

ossimImageHandler* oms::ImageModel::getImageHandler()
{
   if(thePrivateData)
   {
      return thePrivateData->theImageHandler.get();
   }

   return 0;
}

ossimString oms::ImageModel::getType()
{
   if(thePrivateData)
   {
      return thePrivateData->theImageGeometry->getProjection()->getShortName();
   }

   return "Invalid";
}

bool oms::ImageModel::setModelFromFile(const std::string& file,
                                       unsigned int entry)
{
   
   bool result = false;
   if(!thePrivateData)
   {
      thePrivateData = new PrivateData();
   }
   thePrivateData->theImageHandler = ossimImageHandlerRegistry::instance()->open(ossimFilename(file));
   if(thePrivateData->theImageHandler.valid())
   {
      if(thePrivateData->theImageHandler->setCurrentEntry(entry))
      {
         ossimKeywordlist kwl;
         thePrivateData->theImageGeometry = thePrivateData->theImageHandler->getImageGeometry();
         thePrivateData->theBoundingRect = thePrivateData->theImageHandler->getBoundingRect();
         
         if(thePrivateData->theImageGeometry.valid()&&
            thePrivateData->theImageGeometry->getProjection())
         {
            result = true;
         }
      }
   }
   if(!result)
   {
      delete thePrivateData;
      thePrivateData = 0;
   }
   return result;
}

void oms::ImageModel::centerToGround(ossimGpt& gpt)const
{
   if(!thePrivateData) return;
   if(thePrivateData->theImageHandler.valid())
   {
      imageToGround(ossimDpt(thePrivateData->theBoundingRect.width()/2.0,
                             thePrivateData->theBoundingRect.height()/2.0),
                    gpt);
   }
}

void oms::ImageModel::imageToGround(const ossimDpt& imagePoint,
                                    ossimGpt&  gpt,
                                    unsigned int resolution)const
{
   if(!thePrivateData) return;
   
   thePrivateData->theImageGeometry->rnToWorld(imagePoint, resolution, gpt);
}

void oms::ImageModel::groundToImage(const ossimGpt& gpt,
                                    ossimDpt& imagePoint,
                                    unsigned int resolutionLevel)const
{
   if(!thePrivateData) return;
   if(thePrivateData->theImageGeometry.valid()&&thePrivateData->theImageGeometry->getProjection())
   {
      thePrivateData->theImageGeometry->worldToRn(gpt, resolutionLevel, imagePoint);
   }
}

//=============================================================================
// Input:   gpts     ground point
//          probLev  probability level (.5, .9, .95, other defaults to 1 sigma)
//          angInc   angular granularity (deg) of image ellipse (eg. 30 degrees)
// Output:  pqeArray [0]   CE
//                   [1]   LE
//                   [2]   ellipse SMA
//                   [3]   ellipse SMI
//                   [4]   ellipse SMA azimuth (rad)
//                   [5]   number of image ellipse points
//          sampEll  array containing image ellipse samples
//          lineEll  array containing image ellipse lines
//=============================================================================
bool oms::ImageModel::imageToGroundErrorPropagation(const ossimGpt& gpt,
                                                    double probLev,
                                                    double angInc,
                                                    double pqeArray[],
                                                    double sampEll[],
                                                    double lineEll[])const
{
   bool errorPropOK = false;
   for (int k=0; k<6; ++k)
      pqeArray[k] = 0.0;

   if(!thePrivateData)
      return errorPropOK;
   

   if(thePrivateData->theImageGeometry.valid() &&
      thePrivateData->theImageGeometry->getProjection())
   {
      ossimProjection* proj = thePrivateData->theImageGeometry->getProjection();

      if (proj)
      {
         ossimRpcModel* model = PTR_CAST(ossimRpcModel, proj);

         if (model)
         {
         
            // RPC model parameters structures
            ossimRpcModel::rpcModelStruct rpcPar;
            pqeRPCModel rpc;

            // Retrieve error components & RPC parameters
            double bias = model->getBiasError();
            double rand = model->getRandError();
            model->getRpcParameters(rpcPar);

            // Load local structure
            rpc.theLineScale  = rpcPar.lineScale;
            rpc.theSampScale  = rpcPar.sampScale;
            rpc.theLatScale   = rpcPar.latScale;
            rpc.theLonScale   = rpcPar.lonScale;
            rpc.theHgtScale   = rpcPar.hgtScale;
            rpc.theLineOffset = rpcPar.lineOffset;
            rpc.theSampOffset = rpcPar.sampOffset;
            rpc.theLatOffset  = rpcPar.latOffset;
            rpc.theLonOffset  = rpcPar.lonOffset;
            rpc.theHgtOffset  = rpcPar.hgtOffset;
            rpc.theType       = rpcPar.type;
            for (int i=0; i<20; i++)
            {
               rpc.theLineNumCoef[i] = rpcPar.lineNumCoef[i];
               rpc.theLineDenCoef[i] = rpcPar.lineDenCoef[i];
               rpc.theSampNumCoef[i] = rpcPar.sampNumCoef[i];
               rpc.theSampDenCoef[i] = rpcPar.sampDenCoef[i];
            }

            // Set ECF intersection point
            ossimEcefPoint pt(gpt);

            // Characterize local terrain geometry
            HeightRefType_t cRefType = AT_DEM;
            ossimHgtRef hgtRef(cRefType);
            ossimColumnVector3d surfN = hgtRef.getLocalTerrainNormal(gpt);

            // Characterize local terrain accuracy
            NEWMAT::Matrix surfCovENU(3,3);
            bool tCovOK = hgtRef.getSurfaceCovMatrix(gpt, surfCovENU);
            // Instantiate position quality evaluator
            ossimPositionQualityEvaluator qev(pt, bias, rand, rpc, surfN, surfCovENU);

            // Set probability level
            pqeProbLev_t pLev;
            if (probLev == 0.5)
               pLev = P50;
            else if (probLev == 0.9)
               pLev = P90;
            else if (probLev == 0.95)
               pLev = P95;
            else
               pLev = ONE_SIGMA;


            if (qev.isValid())
            {
               double CE;
               double LE;

               // Compute CE/LE
               errorPropOK = qev.computeCE_LE(pLev, CE, LE);

               // Extract error ellipse definition
               if (errorPropOK)
               {
                  ossim_uint32 idx = 0;
                  pqeArray[0] = CE;
                  pqeArray[1] = LE;

                  pqeErrorEllipse ell;
                  pqeImageErrorEllipse_t ellImg;

                  // Block unreasonable increment
                  if (angInc > 120.0)
                     angInc = 120.0;

                  qev.extractErrorEllipse(pLev, angInc, ell, ellImg);

                  // Parameters
                  pqeArray[2] = ell.theSemiMajorAxis;
                  pqeArray[3] = ell.theSemiMinorAxis;
                  pqeArray[4] = ell.theAzimAngle;
                  pqeArray[5] = ellImg.size();

                  // Image space ellipse
                  for (idx=0; idx<ellImg.size(); ++idx)
                  {
                     sampEll[idx] = ellImg[idx].x;
                     lineEll[idx] = ellImg[idx].y;
                  }
               }
            }

         }

      }

   }

   return errorPropOK;
}


double oms::ImageModel::upIsUpRotation()const
{
   double result = 0.0;
   if(!thePrivateData) return result;
   const int NUMBER_OF_SAMPLES = 9;
   const double ELEVATION_DISPLACEMENT = 20; // in meters.  This is about a height 
                                             // of a 6 to 7 story building
   ossimRefPtr<ossimImageGeometry> geom = thePrivateData->theImageGeometry.get();
   ossimDrect bounds = thePrivateData->theImageHandler->getBoundingRect();
   if(geom.valid())
   {
      ossim_float64 widthPercent  = bounds.width()*.1;
      ossim_float64 heightPercent = bounds.height()*.1;
      
      // sanity check to make sure that taking 10 percent out on the image
      // gets us to at least 1 pixel away
      if(widthPercent < 1.0) widthPercent = 1.0;
      if(heightPercent < 1.0) heightPercent = 1.0;
      
      // set up some work variables to help calculate the average partial
      //
      std::vector<ossimDpt> ipts(NUMBER_OF_SAMPLES);
      std::vector<ossimGpt> gpts(NUMBER_OF_SAMPLES);
      std::vector<ossimDpt> iptsDisplacement(NUMBER_OF_SAMPLES);
      std::vector<ossimDpt> partials(NUMBER_OF_SAMPLES);
      ossimDpt averageDelta(0.0,0.0);
      
      ossimDpt centerIpt = bounds.midPoint();
      
      // lets take an average displacement about the center point (3x3 grid)
      // we will go 10 percent out of the width and height of
      // the image and look at the displacement at those points
      // and average them
      // we will use the average displacement to compute the
      // up is up notation.
      //
      
      // top row
      ipts[0] = centerIpt + ossimDpt(widthPercent, -heightPercent); // 45 degree left quadrant
      ipts[1] = centerIpt + ossimDpt(0.0,heightPercent); // 45 degree middle top 
      ipts[2] = centerIpt + ossimDpt( widthPercent, -heightPercent); // 45 degree right quadrant
      
      // middle row
      ipts[3] = centerIpt + ossimDpt(-widthPercent, 0.0); // left middle
      ipts[4] = centerIpt;
      ipts[5] = centerIpt + ossimDpt(widthPercent, 0.0);
      
      // bottom row
      ipts[6] = centerIpt + ossimDpt(-widthPercent, heightPercent);
      ipts[7] = centerIpt + ossimDpt(0.0, heightPercent);
      ipts[8] = centerIpt + ossimDpt(widthPercent, heightPercent);
      
      ossim_uint32 idx = 0;
      for(idx = 0; idx < ipts.size(); ++idx)
      {
         double h = 0.0;
         geom->localToWorld(ipts[idx], gpts[idx]);
         h = gpts[idx].height();
         if(ossim::isnan(h)) h = 0.0;
         gpts[idx].height(h + ELEVATION_DISPLACEMENT);
         geom->worldToLocal(gpts[idx], iptsDisplacement[idx]);
         averageDelta = averageDelta + (iptsDisplacement[idx] - ipts[idx]);
      }
      
      ossim_float64 averageLength = averageDelta.length();
      if(averageLength < 1) return false;
      
      if(!ossim::almostEqual((double)0.0, (double)averageLength))
      {
         averageDelta = averageDelta/averageLength;
      }
      
      ossimDpt averageLocation =  (ossimDpt(averageDelta.x*bounds.width(), 
                                            averageDelta.y*bounds.height())+centerIpt) ;
      ossimGpt averageLocationGpt;
      ossimGpt centerGpt;
      
      geom->localToWorld(averageLocation, averageLocationGpt);
      geom->localToWorld(ipts[0], centerGpt);
      
      ossimDpt deltaPt = averageLocation - centerIpt; 
      ossimDpt deltaUnitPt = deltaPt;
      double len = deltaPt.length();
      if(len > FLT_EPSILON)
      {
         deltaUnitPt  = deltaUnitPt/len;
      }
      
      // image space model positive y is down.  Let's refelct to positve y up
      //
      deltaUnitPt.y *= -1.0; // reflect y to be right handed
      
      result = ossim::atan2d(deltaUnitPt.x, deltaUnitPt.y);
      
      // we are essentially simulating camera rotation so negate the rotation
      // value
      //
      result *= -1;
      
      if(result < 0) result += 360.0;
   }   
   return result;
}


bool oms::ImageModel::getProjSurfaceInfo(const ossimGpt& gpt, ossimElevationAccuracyInfo& info)
{
   bool infoCheckOK = false;

   if(!thePrivateData)
      return infoCheckOK;

   ossimHgtRef hgtRef(AT_DEM);

   ossimDpt gsd;

   infoCheckOK = ossimElevManager::instance()->getAccuracyInfo(info, gpt);//hgtRef.getSurfaceInfo(gpt, info, gsd);

   return infoCheckOK;
}


void oms::ImageModel::destroy()
{
   if(thePrivateData)
   {
      delete thePrivateData;
      thePrivateData = 0;
   }
}


