# defines the minimum version for CMake
cmake_minimum_required(VERSION 3.10)

# defines the project name
project(DemoCode)

# add the sub-directory to the search path.
add_subdirectory(experiments)

# Create the executable file.
add_executable(Demo main.cpp)

# Link the library created from the sub-directory. 
target_link_libraries(Demo PUBLIC Experiments)

# Set the Cpp version.
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)