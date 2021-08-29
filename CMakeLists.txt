cmake_minimum_required(VERSION 3.16.3)
project(jdog_game_engine_linux)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
add_subdirectory(src/dependencies/glfw)

# find_package(OpenGL REQUIRED) # TODO: replace with extension loader library

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -std=c++14")

include_directories(
    src/dependencies/glfw/include
    src/dependencies/glad/include
)

file(GLOB PROJECT_SOURCES src/*.cpp)
file(GLOB GLAD_SOURCES src/dependencies/glad/src/glad.c)

set(GLAD_LIBRARIES dl)

add_definitions(
    -DGLFW_INCLUDE_NONE # do not include OpenGL::GL. use glad as extension loader 
)

# TODO: add shaders

add_executable(
    ${PROJECT_NAME} 
    ${GLAD_SOURCES}
    ${PROJECT_SOURCES}
)

target_link_libraries(${PROJECT_NAME} glfw ${GLAD_LIBRARIES})