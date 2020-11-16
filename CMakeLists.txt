cmake_minimum_required(VERSION 3.10)

# set the project name
project(FractalBitmapGenerator VERSION 1.0.0)

# Library inclusion
    # Bitmap
    add_library(
        Bitmap
        ./include/Bitmap.h
        ./src/Bitmap.cpp
        )
    # BitmapFileHeader
    add_library(
        BitmapFileHeader
        ./include/BitmapFileHeader.h
        )
    # BitmaInfoHeader
    add_library(
        BitmapInfoHeader
        ./include/BitmapInfoHeader.h
        )
    # FractalCreator
    add_library(
        FractalCreator
        ./include/FractalCreator.h
        ./src/FractalCreator.cpp
        )
    # Mandelbrot
    add_library(
        Mandelbrot
        ./include/Mandelbrot.h
        ./src/Mandelbrot.cpp
        )
    # RGB
    add_library(
        RGB
        ./include/RGB.h
        ./src/RGB.cpp
        )
    # Zoom
    add_library(
        Zoom
        ./include/Zoom.h
        )
    # ZoomList
    add_library(
        ZoomList
        ./include/ZoomList.h
        ./src/ZoomList.cpp
    )

# add the executable
add_executable(FractalBitmapGenerator ./src/main.cpp)

target_link_libraries(FractalBitmapGenerator PRIVATE Bitmap BitmapFileHeader BitmapInfoHeader FractalCreator Mandelbrot RGB Zoom ZoomList)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
