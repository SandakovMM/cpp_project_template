cmake_minimum_required(VERSION 3.2)

project(NAME_OF_PROJECT)

set(SOURCE_FILES main.cpp)

add_executable(project ${SOURCE_FILES})

install(TARGETS project DESTINATION ${PROJECT_SOURCE_DIR}/out/bin)