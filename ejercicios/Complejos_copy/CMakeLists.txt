# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Anna de Diego
# @date 11/01/2021
# @brief CMakeLists.txt para Complejos
#


cmake_minimum_required(VERSION 3.1)  # Mandatory

# set the project name 
project(Complejos              # Mandatory
    VERSION 1.0
    DESCRIPTION "Un proyecto CMake para la aplicacion complejos"
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
    src/complejos.h
    src/complejos.cc
    src/complejos_funciones.h
    src/complejos_funciones.cc
    tests/complejos_test.cc)

add_executable(Complejos
    src/complejos.h
    src/complejos.cc
    src/complejos_funciones.h
    src/complejos_funciones.cc
		src/complejos_main.cc)

target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
