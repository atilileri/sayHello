cmake_minimum_required (VERSION 3.20.2 FATAL_ERROR)

project(sayHi)

add_subdirectory (Speaker)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    speaker
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/Speaker"
)

