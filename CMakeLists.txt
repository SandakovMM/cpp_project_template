cmake_minimum_required(VERSION 3.2)

project(cpp_project_template)

# Enable some hardcore warnings
set(WARNINGS "-Werror -Wall -Wextra -fdiagnostics-show-option -Wcast-align")
set(WARNINGS "${WARNINGS} -Wconversion -Wfloat-equal -Wformat-nonliteral -Wformat-security")
set(WARNINGS "${WARNINGS} -Wformat-signedness -Winline -Winvalid-pch -Wlogical-op")
set(WARNINGS "${WARNINGS} -Wmissing-declarations -Wmissing-include-dirs -Woverlength-strings")
set(WARNINGS "${WARNINGS} -Wswitch-default -Wtrampolines -Wundef -Wunused -Wunused-local-typedefs")
set(WARNINGS "${WARNINGS} -Wwrite-strings -Wno-variadic-macros")


set(CNAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -O3 -Werror -Wall")

add_subdirectory(src)
add_subdirectory(test)