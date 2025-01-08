cmake_minimum_required(VERSION 3.10)
project(LegendOfAurion)

set(CMAKE_C_STANDARD 11)

# macOS system frameworks
set(CMAKE_EXE_LINKER_FLAGS "-framework OpenGL -framework GLUT")

add_executable(legend_of_aurion main.c)
