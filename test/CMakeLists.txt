cmake_minimum_required(VERSION 3.2)
project(NAME_OF_PROJECT_tests)

set(GTEST_DIR "/usr/src/gmock/gtest")
set(GTEST_PROJ "/usr/src/gmock")
set(GMOCK_INCLUDE "/usr/include/gmock")

include_directories(${GTEST_DIR}/include)
include_directories(${GMOCK_INCLUDE})

add_subdirectory(${GTEST_PROJ} ./gmock)

set (PROJECT_SRC ${PROJECT_SOURCE_DIR}/src)
include_directories(${PROJECT_SRC})

set (main_test_src
     main_test.cpp
     PROJECT_SRC/main.cpp)
add_executable(main.tests ${main_test_src})

target_link_libraries(main.tests PUBLIC gmock_main)