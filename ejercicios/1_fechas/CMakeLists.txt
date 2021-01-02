# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Anna de Diego Llorens
# @date 18 Jun 2020
# @brief CMakeLists.txt for 1_fechas

cmake_minimum_required(VERSION 3.1)

project(GTests                
    VERSION 1.0
    DESCRIPTION " CMake project for        "
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14) 					
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

include_directories(${PROJECT_SOURCE_DIR}/code)


add_executable(runTests
    )
add_executable(user_program
    )

target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

target_compile_features(runTests PRIVATE cxx_std_14)
target_compile_options(runTests PRIVATE -Wall -Wextra -Wpedantic)
