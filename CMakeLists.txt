cmake_minimum_required(VERSION 3.28)
project(FlightSimulation LANGUAGES CXX)

# Fetch Content for GLFW
include(FetchContent)
FetchContent_Declare(
	glfw
	GIT_REPOSITORY https://github.com/glfw/glfw.git
	GIT_TAG 3.4
	GIT_SHALLOW TRUE
)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(glfw)

add_subdirectory(core)
add_subdirectory(graphics)
add_subdirectory(app)