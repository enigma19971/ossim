#!/bin/sh

#---
# File: ossim-package-cmake-config-fc14-v1.sh
# $Id: ossim-package-cmake-config-fc14-v1.sh 19754 2011-06-14 13:57:02Z dburken $
#---

build_dir="/work/osgeo";

cmake -G "Unix Makefiles" \
-DBUILD_CSMAPI=OFF \
-DBUILD_LIBRARY_DIR=lib \
-DBUILD_OMS=ON \
-DBUILD_OSSIM=ON \
-DBUILD_OSSIM_PLUGIN=OFF  \
-DBUILD_OSSIMCONTRIB_PLUGIN=OFF \
-DBUILD_OSSIMCSM_PLUGIN=OFF \
-DBUILD_OSSIMGDAL_PLUGIN=ON \
-DBUILD_OSSIMKAKADU_PLUGIN=ON \
-DBUILD_OSSIMLAS_PLUGIN=ON \
-DBUILD_OSSIMLIBLAS_PLUGIN=ON \
-DBUILD_OSSIMLIBRAW_PLUGIN=ON \
-DBUILD_OSSIMMRSID_PLUGIN=ON \
-DBUILD_OSSIMNDF_PLUGIN=ON \
-DBUILD_OSSIMNUI_PLUGIN=OFF \
-DBUILD_OSSIMOPENJPEG_PLUGIN=ON \
-DBUILD_OSSIMPNG_PLUGIN=ON \
-DBUILD_OSSIMREGISTRATION_PLUGIN=ON \
-DBUILD_OSSIMQT4=ON \
-DBUILD_OSSIM_MPI_SUPPORT=OFF \
-DBUILD_OSSIMPLANET=ON \
-DBUILD_OSSIMPLANETQT=ON \
-DBUILD_OSSIMPREDATOR=ON \
-DBUILD_OSSIM_TEST_APPS=ON \
-DBUILD_RAPIER_TEST_APPS=ON \
-DBUILD_RUNTIME_DIR=bin \
-DBUILD_SHARED_LIBS=ON \
-DBUILD_WMS=ON \
-DCMAKE_BUILD_TYPE=Debug \
-DCMAKE_INCLUDE_PATH=${build_dir}/local/include \
-DCMAKE_INSTALL_PREFIX=${build_dir}/local \
-DCMAKE_LIBRARY_PATH=${build_dir}/local/lib \
-DCMAKE_MODULE_PATH=${build_dir}/ossim_package_support/cmake/CMakeModules \
-DKAKADU_ROOT_SRC=/work/drb/kakadu/latest \
-DKAKADU_AUX_LIBRARY=${build_dir}/local/lib64/libkdu_a64R.so \
-DKAKADU_LIBRARY=${build_dir}/local/lib64/libkdu_v64R.so  \
-DMPI_INCLUDE_PATH=/usr/include/openmpi-x86_64 \
-DMPI_LIBRARY=/usr/lib64/openmpi/lib/libmpi.so \
-DMRSID_LIBRARY=${build_dir}/local/lib/libltidsdk.a \
-DOSSIM_BUILD_ADDITIONAL_DIRECTORIES="${build_dir}/ossimjni" \
-DOSSIM_COMPILE_WITH_FULL_WARNING=ON \
-DOSSIM_DEPENDENCIES=${build_dir}/local \
-DOSSIM_DEV_HOME=${build_dir} \
-DOSSIM_INSTALL_PLUGINS_WITH_VERSION=OFF \
-DOSSIM_LIBRARIES=${build_dir}/build/lib/libossim.so \
-DOSSIMPLANET_ENABLE_EPHEMERIS=ON \
../ossim_package_support/cmake/

