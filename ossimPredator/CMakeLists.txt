PROJECT(ossimPredator)
Message("################## Setting up ossimPredator library #########################")

#INCLUDE(OssimVersion)
#INCLUDE(OssimUtilities)
INCLUDE(OssimCommonVariables)

IF(NOT APPLE)
  cmake_minimum_required(VERSION 2.6)
ELSE(NOT APPLE)
  cmake_minimum_required(VERSION 2.8)
ENDIF(NOT APPLE)

INCLUDE_DIRECTORIES(${${PROJECT_NAME}_SOURCE_DIR}/include)

# Stores list of libs to link with. Initialized throughout.
set( dependentLibs )


################################################## BUILD THE LIBRARY #######################################
SET(LIB_NAME ossimPredator)


INCLUDE_DIRECTORIES(${${PROJECT_NAME}_BINARY_DIR}/include)
INCLUDE_DIRECTORIES(${FFMPEG_INCLUDE_DIR})
INCLUDE_DIRECTORIES(${OSG_INCLUDES})
INCLUDE_DIRECTORIES(${OSSIM_INCLUDE_DIR})


FILE(GLOB OSSIMPREDATOR_SRCS RELATIVE_PATH ${CMAKE_CURRENT_SOURCE_DIR} "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
FILE(GLOB OSSIMPREDATOR_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/ossimPredator/*.h")

ADD_DEFINITIONS(-D_AFXEXT)
ADD_DEFINITIONS(-D_AFXDLL)
ADD_DEFINITIONS(-DNOMINMAX)
ADD_DEFINITIONS(-DOSSIMPREDATOR_LIBRARY)


SET (CMAKE_MFC_FLAG 0)

SET (LIB_TYPE SHARED)




ADD_LIBRARY(${PROJECT_NAME}
            ${LIB_TYPE}
            ${OSSIMPREDATOR_HEADERS}
            ${OSSIMPREDATOR_SRCS} )




set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS "/MP" )




TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${CURL_LIBRARIES} ${OSG_LIBRARIES} ossimcore  opengl32  wms  ${ZLIB_LIBRARY})


