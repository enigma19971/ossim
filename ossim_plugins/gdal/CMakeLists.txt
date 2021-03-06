set(LIB_NAME ossimgdal_plugin)
MESSAGE( "************** LIBRARY SETUP FOR ossimgdal_plugin******************")

SET(OSSIM_FRAMEWORK_GENERATION "OFF")
SET(OSSIM_USER_DEFINED_DYNAMIC_OR_STATIC "SHARED")


INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}
                    ${OPEN_THREAD_INC}
                    ${GDAL_INC}
                    ${TIFF_INC}
                    ${GEOTIFF_INC})



LINK_DIRECTORIES(${CURL_LINK_DIR}
                 ${GDAL_LINK_DIR}
                 ${ZLIB_LINK_DIR}
                 ${OSG_LINK_DIR}
                 ${OSG_3RDPART_LINK_DIR}
		         ${JPEG_LINK_DIR}
                 ${TIFF_LINK_DIR}
                 ${GEOTIFF_LINK_DIR})

FILE(GLOB_RECURSE OSSIMPLUGIN_SRCS *.cpp)
FILE(GLOB_RECURSE OSSIMPLUGIN_HEADERS *.h)

####
# OSSIMPLUGINSMAKINGDLL controls dll linkage on windows.  
# Adding this sets OSSIM_PLUGINS_DLL #define TO "__declspec(dllexport)".
###
add_definitions("-DOSSIMPLUGINSMAKINGDLL")



SET (LIB_TYPE STATIC)
ADD_DEFINITIONS(-D_AFXEXT)
ADD_DEFINITIONS(-D_AFXDLL)
ADD_DEFINITIONS(-DNOMINMAX)
ADD_DEFINITIONS(-DOSSIM_STATIC)
SET (CMAKE_MFC_FLAG 0)





ADD_LIBRARY(${LIB_NAME}
            ${LIB_TYPE}
            ${OSSIMPLUGIN_SRCS}  ${OSSIMPLUGIN_HEADERS}
           )



TARGET_LINK_LIBRARIES(${LIB_NAME} ossimcore ${GDAL_LIBRARY} ${ZLIB_LIBRARY} )



set_target_properties(${LIB_NAME} PROPERTIES COMPILE_FLAGS "/MP" )

set_target_properties (${LIB_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY  ${OUTPUT_BINDIR})
set_target_properties (${LIB_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY_DEBUG  ${OUTPUT_BINDIR})
set_target_properties (${LIB_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY_RELEASE   ${OUTPUT_BINDIR})
set_target_properties (${LIB_NAME} PROPERTIES ARCHIVE_OUTPUT_DIRECTORY  ${OUTPUT_BINDIR})
set_target_properties (${LIB_NAME} PROPERTIES ARCHIVE_OUTPUT_DIRECTORY_DEBUG  ${OUTPUT_BINDIR})
set_target_properties (${LIB_NAME} PROPERTIES ARCHIVE_OUTPUT_DIRECTORY_RELEASE   ${OUTPUT_BINDIR})



