cmake_minimum_required(VERSION 3.16.3)
project(CHERNO_GAME_ENGINE_LINUX)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
add_subdirectory(dependencies/glfw)

find_package(OpenGL REQUIRED) # TODO: replace with extension loader library

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -std=c++14")

include_directories(dependencies/glfw/)
file(GLOB PROJECT_SOURCES *.cpp)

# TODO: add shaders

add_executable( ${PROJECT_NAME} 
    main.cpp
)

target_link_libraries(${PROJECT_NAME} glfw OpenGL::GL)