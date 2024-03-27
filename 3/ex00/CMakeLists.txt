cmake_minimum_required(VERSION 3.10)

project(ClapTrap)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

file(GLOB SOURCES "*.cpp")
add_executable(ClapTrap ${SOURCES})

