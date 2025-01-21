cmake_minimum_required(VERSION 3.10)
project(LegendOfAurion)

set(CMAKE_C_STANDARD 11)

# Enable build types
set(CMAKE_BUILD_TYPE Debug)

# Compiler warnings
set(CMAKE_C_FLAGS "-Wall -Wextra -pedantic")

# Cross-platform support for OpenGL and GLUT
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

# Add the executable
file(GLOB SOURCES "*.c")
add_executable(legend_of_aurion ${SOURCES})

# Link the OpenGL and GLUT libraries
target_link_libraries(legend_of_aurion ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})
