# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Anna de DIego Llorens
# @date 16/01/2020
# @brief CMakeLists.txt para Fechas
#
#

cmake_minimum_required(VERSION 3.1)

project(Fechas             
    VERSION 1.0
    DESCRIPTION "Un proyecto CMake para la aplicacion fechas"
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14) 					
set(CMAKE_CXX_STANDARD_REQUIRED True)


find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)


set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")


include_directories(${PROJECT_SOURCE_DIR}/src)


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


target_compile_features(runTests PRIVATE cxx_std_14)