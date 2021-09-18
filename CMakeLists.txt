cmake_minimum_required(VERSION 3.21.1 FATAL_ERROR)

project(recipe-08 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_REQUIRED_LINK_OPTIONS "-arch;arm64")


find_package(Boost 1.76 REQUIRED COMPONENTS filesystem)

add_executable(path-info path-info.cpp)

target_link_libraries(path-info
  PUBLIC
    Boost::filesystem
  )