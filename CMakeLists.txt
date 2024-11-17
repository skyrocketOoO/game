cmake_minimum_required(VERSION 3.10)
project(Game)

set(CMAKE_CXX_STANDARD 17)

# Find SDL2
find_package(SDL2 REQUIRED)

# Include directories for headers
include_directories(${SDL2_INCLUDE_DIRS} include)

# Source files
file(GLOB SOURCES
    src/*.cpp
    src/entities/*.cpp
    src/utils/*.cpp
)

# Add the executable
add_executable(game ${SOURCES})

# Link SDL2 library
target_link_libraries(game ${SDL2_LIBRARIES})
