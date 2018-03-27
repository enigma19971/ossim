project(ossimplugins)

MESSAGE("**********************Setting up ossimplugins********************")


IF(NOT APPLE)
  
cmake_minimum_required(VERSION 2.6)

ELSE(NOT APPLE)
  
cmake_minimum_required(VERSION 2.8)

ENDIF(NOT APPLE)


include(OssimVersion)

include(OssimCommonVariables)

include(OssimUtilities)



############################### OVERRIDE THE DEFAULTS TO APPEND THE PLUGIN INFORMATION###################



INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})

INCLUDE_DIRECTORIES(${OSSIM_INCLUDE_DIR})

INCLUDE_DIRECTORIES(${OPENTHREADS_INCLUDE_DIR})


SET(BUILD_OSSIM_FRAMEWORKS "OFF")

SET(OSSIM_PLUGIN_LINK_TYPE "SHARED")



ADD_SUBDIRECTORY(gdal)


ADD_SUBDIRECTORY(png)

