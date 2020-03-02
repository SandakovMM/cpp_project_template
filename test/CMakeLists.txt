cmake_minimum_required(VERSION 3.2)
project(NAME_OF_PROJECT_tests)

set(GTEST_DIR "/usr/src/gtest")
set(GTEST_PROJ "/usr/src/gtest")
set(GMOCK_INCLUDE "/usr/include/gtest")

include_directories(${GTEST_DIR}/include)
include_directories(${GMOCK_INCLUDE})

add_subdirectory(${GTEST_PROJ} ./gmock)

set (PROJECT_SRC ../src)
include_directories(${PROJECT_SRC})

set(CMAKE_CXX_FLAGS "-g -pthread")

set (main_test_src
     main_test.cpp
     ${PROJECT_SRC}/generator.cpp)
add_executable(main.tests ${main_test_src})

target_link_libraries(main.tests PUBLIC gtest_main)