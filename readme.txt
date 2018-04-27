#history 
1. update the plugin directory. keep consistent with the latest version.  2018.1.25
2. add dllexport qualifier to ossimScaleFilter   2018.1.25
3. change gdal version to 1.11.4   2018.1.26
4. change freetype VERSION                     2018.1.25

5. ossimGdalFactory 为了支持中文路径，在这个文件中调用了CPLSetConfigOption("GDAL_FILENAME_IS_UTF8","NO");    2018.2.15

6. ossim无法读出PIX文件中的投影信息，所以在imageHandler中添加了一个函数getGeoTranform,这个函数，得到的是图像的经纬度信息. 2018.2.19

7. change gdal to version 1.11.0.  the precompiled gdal1.11.4 has too much extern 3rdpart lib

8. change ossimcore and ossimgdal_plugin to static lib.   using OSSIM_STATIC macro.   2018.3.27

8. ossmiscalarfilter is modified.   remove null pixel.   2018.4.27