#!/bin/sh

set -ev
sudo apt-get update -qq
sudo apt-get install -qq build-essential libgtk2.0-dev libvtk5-dev libjpeg-dev libtiff4-dev libjasper-dev libopenexr-dev libtbb-dev qtdeclarative5-dev qt5-qmake libqglviewer-dev libeigen3-dev libsuitesparse-dev

# OpenCV
git clone https://github.com/opencv/opencv.git
cd opencv
mkdir build
cd build
cmake ..
make -j4
sudo make -j4 install