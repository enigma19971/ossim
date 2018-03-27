//-----------------------------------------------------------------------------
// File:  Info.h
//
// License:  See top level LICENSE.txt file.
//
// Author:  David Burken
//
// Description: Wrapper class for ossimInfo with swig readable interfaces.
//
//-----------------------------------------------------------------------------
// $Id: Info.h 21395 2012-07-26 21:47:49Z dburken $

#ifndef ossimjniInfo_HEADER
#define ossimjniInfo_HEADER 1

#include <ossimjni/Constants.h>
#include <string>

class ossimInfo;

namespace ossimjni
{
   class Keywordlist;
   
   class OSSIMJNIDLL Info
   {
   public:

      /** @brief default constructor. */
      Info();
      
      /** @brief destructor */
      ~Info();

      /**
       * @brief Initial method.
       *
       * Typically called from application prior to execute.  This parses
       * all options and put in keyword list m_kwl.
       * 
       * @param ap Arg parser to initialize from.
       * @return true, indicating process should continue with execute.
       * @note A throw with an error message of "usage" is used to get out when
       * a usage is printed.
       */
      bool initialize(int argc, char* argv[]);

      /**
       * @brief execute method.
       *
       * Performs the actual dump of information.  This executes any options
       * set including image operations, i.e. -i -p --dno and so on.
       * 
       * @note Throws ossimException on error.
       */
      void execute();

      /**
       * @brief getImageInfo Method to open image "file" and get image info
       * in the form of a ossimjni::Keywordlist.
       *
       * Notes:
       * 1) Keywordlist is a wrapper of ossimKeywordlist which own a map,
       * i.e. std::map<std::string, std::string>.
       *
       * 2) Use KeywordlistIterator to iterator through the map if need.
       *
       * Flags turn on various pieces of info.  These equate to options in
       * ossim-info for image information.
       *
       * @param file Image file to get information for.
       * @param dumpFlag      ossim-info -d
       * @param dnoFlag       ossim-info --dno
       * @param imageGeomFlag ossim-info -p
       * @param imageInfoFlag ossim-info -i 
       * @param metaDataFlag  ossim-info -m 
       * @param paletteFlag   ossim-info --palette
       * @param kwl Keywordlist to initialize. Pointer passed in must be valid.
       *
       * @note Throws ossimException on error.
       */
      void getImageInfo( const std::string& file,
                         bool dumpFlag,
                         bool dnoFlag,
                         bool imageGeomFlag,
                         bool imageInfoFlag,
                         bool metaDataFlag,
                         bool paletteFlag,
                         ossimjni::Keywordlist* kwl) const;

      /**
       * @brief Wraps ossimInfo::closeImage() which closes the ossimImageHandler
       * if open.
       */
      void closeImage();

   private:

      ossimInfo* m_info;
   };

} // End of namespace ossimjni.

#endif /* #ifndef ossimjniInfo_HEADER */
