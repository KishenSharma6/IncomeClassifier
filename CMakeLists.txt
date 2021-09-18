cmake_minimum_required(VERSION 3.21.1 FATAL_ERROR)

project(main LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_REQUIRED_LINK_OPTIONS "-arch;arm64")


find_package(Boost 1.76 REQUIRED COMPONENTS filesystem)

find_package(Eigen 3.4.0 REQUIRED NO_MODULE)


add_executable(main main.cpp)

target_link_libraries(main
  PUBLIC
    Boost::filesystem
  )

target_link_libraries(main Eigen3::Eigen)