cmake_minimum_required(VERSION 3.0)

project(app)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(${PROJECT_NAME} STATIC src/queue.c)

enable_testing()

add_subdirectory(googletest)

add_subdirectory(test)
