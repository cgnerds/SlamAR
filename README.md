SlamAR -An open source, SLAM based augmented reality software.
================================
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/1a7f2c86eac84c2c8b27e2a84f891b21)](https://www.codacy.com/app/cgnerds/SlamAR?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=cgnerds/SlamAR&amp;utm_campaign=Badge_Grade)
Linux: [![Build Status](https://travis-ci.org/cgnerds/SlamAR.svg?branch=master)](https://travis-ci.org/cgnerds/SlamAR)

# Ubuntu 14.04
## Dependencies
- sudo apt-get install build-essential libgtk2.0-dev libvtk5-dev libjpeg-dev libtiff4-dev libjasper-dev libopenexr-dev libtbb-dev qtdeclarative5-dev qt5-qmake libqglviewer-dev libeigen3-dev libsuitesparse-dev libboost-all-dev

## Sophus
- git clone https://github.com/strasdat/Sophus
- cd Sophus
- git checkout a621ff
- mkdir build
- cd build
- cmake ..
- make -j4

## OpenCV
- git clone https://github.com/opencv/opencv.git
- cd opencv
- mkdir build
- cd build
- cmake ..
- make -j4
- sudo make -j4 install

## g2o
- git clone https://github.com/RainerKuemmerle/g2o.git
- cd g2o
- mkdir build
- cd build
- cmake ..
- make -j4
- sudo make -j4 install

## DBoW2
- git clone https://github.com/dorian3d/DBoW2.git
- cd DBoW2
- mkdir build
- cd build
- cmake ..
- make -j4
- sudo make -j4 install

# TUM Dataset
1. Download a RGB-D sequence from [TUM](http://vision.in.tum.de/data/datasets/rgbd-dataset/download), like fr1/xyz and change the parameter *dataset_dir* in the config/default.yaml file accordingly.  
2. Associate RGB images and depth images using the python script associate.py. We already provide associations for some of the sequences in examples/. You can generate your own associations file executing:
- python associate.py rgb.txt depth.txt > associate.txt
