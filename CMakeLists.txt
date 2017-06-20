cmake_minimum_required(VERSION 2.8)
project (SlamAR)

set (CMAKE_CXX_COMPILER "g++")
set (CMAKE_BUILD_TYPE "Release")
set (CMAKE_CXX_FLAGS "-std=c++11 -march=native -03")

############### dependencies ######################
#OpenCV
find_package(OpenCV 3.1 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
