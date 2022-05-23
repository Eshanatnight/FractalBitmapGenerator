cmake_minimum_required(VERSION 3.10)


# Set the headers
set(HEADER_FILES
    "./include/Bitmap.h"
    "./include/BitmapFileHeader.h"
    "./include/BitmapInfoHeader.h"
    "./include/Mandelbrot.h"
    "./include/RGB.h"
    "./include/Zoom.h"
    "./include/ZoomList.h"
)

# set the source files
set(SOURCE_FILES
    "./Bitmap.cpp"
    "./FractalCreator.cpp"
    "./main.cpp"
    "./Mandelbrot.cpp"
    "./RGB.cpp"
    "./ZoomList.cpp"
)

add_executable(${PROJECT_NAME} ${HEADER_FILES} ${SOURCE_FILES})

