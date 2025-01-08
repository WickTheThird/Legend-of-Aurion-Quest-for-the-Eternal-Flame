cmake_minimum_required(VERSION 3.10)
project(LegendOfAurion)

set(CMAKE_C_STANDARD 11)

find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS})

add_executable(legend_of_aurion main.c)
target_link_libraries(legend_of_aurion OpenGL GLUT)
