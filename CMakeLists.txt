cmake_minimum_required(VERSION 2.8)
project (SlamAR)

set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "-std=c++11 -march=native -O3")

LIST(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake_modules)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR/lib})

############ Dependencies #########################
# Eigen
include_directories( "/usr/include/eigen3" )

# OpenCV
find_package( OpenCV 3.1 REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

# Sophus
find_package( Sophus REQUIRED )
include_directories( ${Sophus_INCLUDE_DIRS} )

set( THIRD_PARTY_LIBS 
    ${OpenCV_LIBS}
    ${Sophus_LIBRARIES}
)

# source and examples
include_directories( ${PROJECT_SOURCE_DIR}/include)
add_subdirectory( src )
add_subdirectory( examples )