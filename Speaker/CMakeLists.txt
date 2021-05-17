cmake_minimum_required (VERSION 3.20.2 FATAL_ERROR)

project(speaker)

add_library (${PROJECT_NAME}
    STATIC
    speaker.cpp speaker.h
)

