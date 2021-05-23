cmake_minimum_required (VERSION 3.20.2 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 11)

project(sayHello)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(benchmark)
# add_subdirectory(cli)
# add_subdirectory(docs)

# uncomment if needed but, do not run tests here
# add_executable(${PROJECT_NAME}
#     main.cpp
# )

# target_link_libraries(${PROJECT_NAME}
#     PRIVATE
#     Speaker
# )

