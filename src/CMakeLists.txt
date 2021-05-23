cmake_minimum_required (VERSION 3.0.0 FATAL_ERROR)

project(Speaker)

add_library(${PROJECT_NAME}
    STATIC
    Speaker.cpp
)

target_include_directories (${PROJECT_NAME}
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

