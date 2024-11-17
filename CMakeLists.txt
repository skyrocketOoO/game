cmake_minimum_required(VERSION 3.10)
project(Game)

set(CMAKE_CXX_STANDARD 17)

# Find SDL2
find_package(SDL2 REQUIRED)

# Manually specify SDL2_image
include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS} include)

find_library(SDL2_IMAGE_LIBRARY SDL2_image HINTS /usr/lib /usr/lib/x86_64-linux-gnu)

# Source files
file(GLOB SOURCES
    src/*.cpp
    src/entities/*.cpp
    src/utils/*.cpp
    src/graphics/*.cpp
)

# Add the executable
add_executable(game ${SOURCES})

# Link SDL2 and SDL2_image manually
target_link_libraries(game ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARY})
