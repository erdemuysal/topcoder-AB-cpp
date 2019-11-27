cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 17)
project(AB)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
file(GLOB_RECURSE HEADER_FILES src/*.h)
add_library(AB_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})
target_include_directories(AB_lib PUBLIC src/)

add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
file(GLOB_RECURSE TEST_FILES test/*.cpp)
add_executable(AB ${TEST_FILES})
target_link_libraries(AB AB_lib gtest gtest_main)