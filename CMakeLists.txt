cmake_minimum_required(VERSION 3.20)

project(e2lib VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Headers directory
include_directories(${CMAKE_SOURCE_DIR}/include)

# Source directory
add_library(e2lib SHARED src/e2lib.cpp)

# Installation
install(TARGETS e2lib DESTINATION lib)

# Testing
enable_testing()
add_subdirectory(tests)

# Examples
#add_subdirectory(examples)