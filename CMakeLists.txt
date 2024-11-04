cmake_minimum_required(VERSION 3.10)

project(MyProject VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Define the Semafor library with the correct path to Semafor.cpp
add_library(SemaforLib src/semafor/Semafor.cpp)

# Specify include directories for the Semafor library
target_include_directories(SemaforLib PUBLIC src)

# Add the main executable
add_executable(SemaforProject src/core/main.cpp)

# Link the Semafor library to the main executable
target_link_libraries(SemaforProject PRIVATE SemaforLib)
