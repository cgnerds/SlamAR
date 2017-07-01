SlamAR -An open source, SLAM based augmented reality software.
================================
Linux: [![Build Status](https://travis-ci.org/cgnerds/SlamAR.svg?branch=master)](https://travis-ci.org/cgnerds/SlamAR)

# Ubuntu 16.04
## Eigen
- sudo apt-get install libeigen3-dev

## Sophus
- git clone https://github.com/strasdat/Sophus
- cd Sophus
- git checkout a621ff
- mkdir build
- cd build
- cmake ..
- make 

## OpenCV
- sudo apt-get install build-essential libgtk2.0-dev libvtk5-dev libjpeg-dev libtiff4-dev libjasper-dev libopenexr-dev libtbb-dev

Download OpenCV from the [offical website](https://github.com/opencv/opencv/archive/3.2.0.zip), unzip it and then execute commands as follows.
- cd OpenCV-3.2.0
- mkdir build
- cd build
- cmake ..
- make 
- sudo make install

## g2o
- sudo apt-get install libsuitesparse-dev qtdeclarative5-dev qt5-qmake libqglviewer-dev
- mkdir build
- cd build
- cmake ..
- make 
- sudo make install

# TUM Dataset
1. Download a RGB-D sequence from [TUM](http://vision.in.tum.de/data/datasets/rgbd-dataset/download), like fr1/xyz and change the parameter *dataset_dir* in the config/default.yaml file accordingly.  
2. Associate RGB images and depth images using the python script associate.py. We already provide associations for some of the sequences in examples/. You can generate your own associations file executing:
- python associate.py rgb.txt depth.txt > associate.txt