cmake_minimum_required(VERSION 3.0)

project(app)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(${PROJECT_NAME} SHARED src/queue.c)
