#history
#change freetype VERSION                     2018.1.25

project(ossim_all)



IF(NOT APPLE)
  cmake_minimum_required(VERSION 2.6)
ELSE(NOT APPLE)
  cmake_minimum_required(VERSION 2.8)
ENDIF(NOT APPLE)



SET(CMAKE_MODULE_PATH "${${PROJECT_NAME}_SOURCE_DIR}/ossim_package_support/cmake/CMakeModules;${CMAKE_MODULE_PATH}")

#set your 3rd part libraries path here
####################################################
SET (3RDPART_DIR "d:/3rdPart")
####################################################



IF(CMAKE_CL_64)
    SET(PLATFORM x64)    
ELSE(CMAKE_CL_64)
    SET(PLATFORM x86)
ENDIF(CMAKE_CL_64)

SET(OUTPUT_BINDIR ${3RDPART_DIR}/ossim/${PLATFORM})
MAKE_DIRECTORY(${OUTPUT_BINDIR})
SET(OUTPUT_LIBDIR ${PROJECT_BINARY_DIR}/lib)
MAKE_DIRECTORY(${OUTPUT_LIBDIR})


SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${OUTPUT_LIBDIR})
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${OUTPUT_BINDIR})
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_BINDIR})

SET (OSSIM_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/ossim/include")

SET (WMS_INCLUDE_DIR   "${CMAKE_CURRENT_SOURCE_DIR}/libwms/include")
SET (OSSIMPLANET_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/ossimplanet/include")
SET (OSSIMPLANET_LIBRARY debug ossimPlanetd optimized ossimPlanet)



##########################################################################################


#3rd part includes
##########################################################################################
#jpeg

SET (JPEG_INC "${3RDPART_DIR}/libjpeg")

SET (JPEG_LINK_DIR "${3RDPART_DIR}/libjpeg/lib/${PLATFORM}")



#tiff

SET (TIFF_INC        "${3RDPART_DIR}/tiff-4.0.0/libtiff")
SET (TIFF_LINK_DIR   "${3RDPART_DIR}/tiff-4.0.0/lib/${PLATFORM}")




#geotiff

SET (GEOTIFF_INC      "${3RDPART_DIR}/libgeotiff-1.2.5")
SET (GEOTIFF_LINK_DIR "${3RDPART_DIR}/libgeotiff-1.2.5/lib/${PLATFORM}")

#zip
SET(ZLIB_INCLUDE_DIR  "${3RDPART_DIR}/ZLIB")

SET(ZLIB_LINK_DIR     "${3RDPART_DIR}/zlib/LIB/${PLATFORM}")
SET(ZLIB_LIBRARY      debug zlibd  optimized zlib)

#osg
SET (OSG_INCLUDES    "${3RDPART_DIR}/openscenegraph/include")
SET (OSG_LINK_DIR    "${3RDPART_DIR}/openscenegraph/lib/${PLATFORM}")

SET (OSG_LIBRARIES    debug osgTextd debug openthreadsd debug osgutild debug osgViewerd debug osgd debug osgGAd debug osgDBd optimized osgText optimized openthreads optimized osgutil optimized osgViewer optimized osg optimized osgGA optimized osgDB)
SET (OPEN_THREAD_INC "${3RDPART_DIR}/openscenegraph/include")
SET (OSG_3RDPART_INC "${3RDPART_DIR}/osg_3rdPart_vs2010/${PLATFORM}/include")
SET (OSG_3RDPART_LINK_DIR "${3RDPART_DIR}/osg_3rdPart_vs2010/${PLATFORM}/lib/")



#freetype

SET (FREETYPE_INC "${OSG_3RDPART_INC}/${Configuration}/include")

#curl

SET (CURL_INCLUDE_DIR "${3RDPART_DIR}/curl-7.28.0/${PLATFORM}/INCLUDE")
SET (CURL_LINK_DIR    "${3RDPART_DIR}/curl-7.28.0/${PLATFORM}")
SET (CURL_LIBRARIES    optimized libcurl debug libcurl_debug)

#expat
SET (EXPAT_INC "${3RDPART_DIR}/expat-2.0.1/LIB")
SET (EXPAT_LINK_DIR "${3RDPART_DIR}/expat-2.0.1/${PLATFORM}")
SET (EXPAT_LIBRARIES expat.lib)


#ffmpeg
SET (FFMPEG_INCLUDE_DIR "${3RDPART_DIR}/ffmpeg_mingw/include")

#gdal
#SET(GDAL_INC "${3RDPART_DIR}/gdal1.9/include")
#SET(GDAL_LINK_DIR "${3RDPART_DIR}/gdal1.9/${PLATFORM}/$(Configuration)")
#SET(GDAL_LIBRARY  gdal_i)
SET(GDAL_INC "${3RDPART_DIR}/gdal1.11.0/include")
SET(GDAL_LINK_DIR "${3RDPART_DIR}/gdal1.11.0/lib")
SET(GDAL_LIBRARY  gdal_i)




#PNG
SET(PNG_INC "${3RDPART_DIR}/libpng")
SET(PNG_LINK_DIR "${3RDPART_DIR}/libpng/lib/${PLATFORM}")
SET(PNG_LIBRARY  libpng15)



ADD_SUBDIRECTORY(ossim)

ADD_SUBDIRECTORY(ossimPlanet)
ADD_SUBDIRECTORY(libwms)
ADD_SUBDIRECTORY(ossimPlanetQt)
ADD_SUBDIRECTORY(ossim_Plugins)
#ADD_SUBDIRECTORY(ossimPredator)