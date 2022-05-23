cmake_minimum_required(VERSION 3.10)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set the project name
project(FractalBitmapGenerator)

set(CMAKE_BUILD_TYPE Release)

add_subdirectory("src")

