#!/bin/bash
echo -e "\n\nGeneral update\n"
sudo apt update && sudo apt upgrade -y
####


echo -e "\nInstall QT5\n"
sudo apt-get install build-essential
sudo apt-get install libx11-xcb-dev libglu1-mesa-dev
###

echo -e "\n\nInstall OpenCv 3.4.13\n"
cd /opt
#sudo -s # do it before starting the script
####

echo -e "\n\nGetting sources\n"
wget -O opencv.zip https://github.com/opencv/opencv/archive/refs/tags/3.4.13.zip
wget -O opencv_contrib.zip https://github.com/opencv/opencv_contrib/archive/refs/tags/3.4.13.zip
####

echo -e "\n\nUnpacking sources\n"
unzip opencv.zip
unzip opencv_contrib.zip
####

echo -e "\n\nRenaming folders\n"
mv opencv-3.4.13 opencv
mv opencv_contrib-3.4.13 opencv_contrib
####

echo -e "\n\nDeleting .zip files\n"
rm opencv.zip
rm opencv_contrib.zip
####

echo -e "\n\nStarting building process\n"
cd /opt/opencv
mkdir release
cd release
echo -e "\n\nSetting build arguments\n"
cmake -D WITH_QT=ON -D WITH_QTKIT=ON -D BUILD_TIFF=ON -D WITH_CUDA=OFF -D ENABLE_AVX=OFF -D WITH_OPENGL=OFF -D WITH_OPENCL=OFF -D WITH_IPP=OFF -D WITH_TBB=ON -D BUILD_TBB=ON -D WITH_EIGEN=OFF -D WITH_V4L=OFF -D WITH_VTK=OFF -D BUILD_TESTS=OFF -D BUILD_PERF_TESTS=OFF -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local -D OPENCV_EXTRA_MODULES_PATH=/opt/opencv_contrib/modules /opt/opencv/
####

echo -e "\n\nBuilding\n"
make -j4
make install
ldconfig
####

echo -e "\n\nChecking Version\n"
pkg-config --modversion opencv
echo -e "\n\nEnd of script\n"
cd
exit
