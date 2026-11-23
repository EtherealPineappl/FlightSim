add_executable(app src/main.cpp)
target_link_libraries(app PRIVATE core graphics glfw)

target_compile_options(app PRIVATE /W4)
