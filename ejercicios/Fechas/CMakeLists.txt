# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author F. de Sande
# @date 18 Jun 2020
# @brief CMakeLists.txt para Fechas
# CMakeLists.txt defines the whole build
# CMake reads CMakeLists.txt sequentially
#


cmake_minimum_required(VERSION 3.1)  # Mandatory

# set the project name 
project(Fechas              # Mandatory
    VERSION 1.0
    DESCRIPTION "Un proyecto CMake para la aplicacion fechas"
    LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14) 						# Use c++14
set(CMAKE_CXX_STANDARD_REQUIRED True)


find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)

# Adds an executable target called "runTests" to be built from the source files listed in the command invocation.
add_executable(runTests
    tests/gtest_main.cc
    src/fecha.h
    src/fecha.cc
    tests/test_fecha.cc)

add_executable(Fechas
    src/fecha.h
    src/fecha.cc
    src/fecha_funciones.h
    src/fecha_funciones.cc
		src/fecha_main.cc)

target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

# Add expected compiler features to a target.
target_compile_features(runTests PRIVATE cxx_std_14)