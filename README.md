# SlamAR
An open source, SLAM based augmented reality software.

# Ubuntu 16.04
## Eigen
> sudo apt-get install libeigen3-dev

## Sophus
> git clone https://github.com/strasdat/Sophus
> cd Sophus
> git checkout a621ff

## OpenCV
> sudo apt-get install build-essential libgtk2.0-dev libvtk5-dev libjpeg-dev libtiff4-dev libjasper-dev libopenexr-dev libtbb-dev

Download OpenCV from the [offical website](https://github.com/opencv/opencv/archive/3.2.0.zip), unzip it and then execute commands as follows.
>cd OpenCV-3.2.0
>mkdir build
>cd build
>cmake ..
>make 
>sudo make install

# Dataset
Download the RGBD file from [TUM](http://vision.in.tum.de/data/datasets/rgbd-dataset/download), like fr1/xyz and change the parameter *dataset_dir* in the config/default.yaml file accordingly.  
