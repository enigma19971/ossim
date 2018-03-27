#---
# File:  FindOpenCV.cmake
# 
# Locate OPENCV
#
# This module defines:
#
# OPENCV_INCLUDE_DIR
#
# OPENCV_FOUND, 
# OPENCV_CORE_FOUND 
# OPENCV_HIGHGUI_FOUND
# OPENCV_IMGPROC_FOUND
# OPENCV_LEGACY_FOUND
# OPENCV_ML_FOUND 
#
# OPENCV_CORE_LIBRARY
# OPENCV_HIGHGUI_LIBRARY
# OPENCV_IMGPROC_LIBRARY
# OPENCV_LEGACY_LIBRARY
# OPENCV_ML_LIBRARY
# OPENCV_LIBRARIES
#
# Created by Garrett Potts.
#
# $Id: FindOpenCV.cmake 19835 2011-07-18 21:01:32Z dburken $

# Find include path:
find_path(OPENCV_INCLUDE_DIR opencv2/opencv.hpp PATHS /usr/include/opencv2 /usr/local/include)

macro(FIND_OPENCV_LIBRARY MYLIBRARY MYLIBRARYNAME)

   find_library( ${MYLIBRARY}
      NAMES "${MYLIBRARYNAME}${OPENCV_RELEASE_POSTFIX}"
      PATHS
      /usr/lib64
      /usr/lib
     /usr/local/lib
   )

endmacro(FIND_OPENCV_LIBRARY MYLIBRARY MYLIBRARYNAME)

FIND_OPENCV_LIBRARY(OPENCV_CALIB3D_LIBRARY opencv_calib3d)
FIND_OPENCV_LIBRARY(OPENCV_CONTRIB_LIBRARY opencv_contrib)
FIND_OPENCV_LIBRARY(OPENCV_CORE_LIBRARY opencv_core)
FIND_OPENCV_LIBRARY(OPENCV_FEATURES2D_LIBRARY opencv_features2d)
FIND_OPENCV_LIBRARY(OPENCV_FLANN_LIBRARY opencv_flann)
FIND_OPENCV_LIBRARY(OPENCV_GPU_LIBRARY opencv_gpu)
FIND_OPENCV_LIBRARY(OPENCV_HIGHGUI_LIBRARY opencv_highgui)
FIND_OPENCV_LIBRARY(OPENCV_IMGPROC_LIBRARY opencv_imgproc)
FIND_OPENCV_LIBRARY(OPENCV_LEGACY_LIBRARY opencv_legacy)
FIND_OPENCV_LIBRARY(OPENCV_ML_LIBRARY opencv_ml)

message( STATUS "OPENCV_INCLUDE_DIR        = ${OPENCV_INCLUDE_DIR}" )
message( STATUS "OPENCV_CALIB3D_LIBRARY    = ${OPENCV_CALIB3D_LIBRARY}" )
message( STATUS "OPENCV_CONTRIB_LIBRARY    = ${OPENCV_CONTRIB_LIBRARY}" )
message( STATUS "OPENCV_CORE_LIBRARY       = ${OPENCV_CORE_LIBRARY}" )
message( STATUS "OPENCV_FEATURES2D_LIBRARY = ${OPENCV_FEATURES2D_LIBRARY}" )
message( STATUS "OPENCV_FLANN_LIBRARY      = ${OPENCV_FLANN_LIBRARY}" )
message( STATUS "OPENCV_GPU_LIBRARY        = ${OPENCV_GPU_LIBRARY}" )
message( STATUS "OPENCV_HIGHGUI_LIBRARY    = ${OPENCV_HIGHGUI_LIBRARY}" )
message( STATUS "OPENCV_IMGPROC_LIBRARY    = ${OPENCV_IMGPROC_LIBRARY}" )
message( STATUS "OPENCV_LEGACY_LIBRARY     = ${OPENCV_LEGACY_LIBRARY}" )
message( STATUS "OPENCV_ML_LIBRARY         = ${OPENCV_ML_LIBRARY}" )

set(OPENCV_FOUND "NO")
if(OPENCV_INCLUDE_DIR AND OPENCV_CALIB3D_LIBRARY AND OPENCV_CONTRIB_LIBRARY AND OPENCV_CORE_LIBRARY AND OPENCV_FEATURES2D_LIBRARY AND OPENCV_FLANN_LIBRARY AND OPENCV_GPU_LIBRARY AND OPENCV_HIGHGUI_LIBRARY AND OPENCV_IMGPROC_LIBRARY AND OPENCV_LEGACY_LIBRARY AND OPENCV_ML_LIBRARY)

   set(OPENCV_FOUND "YES")
   set(OPENCV_LIBRARIES ${OPENCV_CALIB3D_LIBRARY} ${OPENCV_CONTRIB_LIBRARY} ${OPENCV_CORE_LIBRARY} ${OPENCV_FEATURES2D_LIBRARY} ${OPENCV_FLANN_LIBRARY} ${OPENCV_GPU_LIBRARY} ${OPENCV_HIGHGUI_LIBRARY} ${OPENCV_IMGPROC_LIBRARY} ${OPENCV_LEGACY_LIBRARY} ${OPENCV_ML_LIBRARY})
   message( STATUS "OPENCV_LIBRARIES        = ${OPENCV_LIBRARIES}" )

else(OPENCV_INCLUDE_DIR AND OPENCV_CORE_LIBRARY AND OPENCV_HIGHGUI_LIBRARY AND OPENCV_IMGPROC_LIBRARY AND OPENCV_LEGACY_LIBRARY AND OPENCV_ML_LIBRARY)

   message( WARNING "Could not find OPENCV" )

endif(OPENCV_INCLUDE_DIR AND OPENCV_CALIB3D_LIBRARY AND OPENCV_CONTRIB_LIBRARY AND OPENCV_CORE_LIBRARY AND OPENCV_FEATURES2D_LIBRARY AND OPENCV_FLANN_LIBRARY AND OPENCV_GPU_LIBRARY AND OPENCV_HIGHGUI_LIBRARY AND OPENCV_IMGPROC_LIBRARY AND OPENCV_LEGACY_LIBRARY AND OPENCV_ML_LIBRARY)