add_executable(app src/main.cpp)
target_link_libraries(app PRIVATE core graphics glfw)

if(MSVC)
    target_compile_options(app PRIVATE /W4)
else()
    target_compile_options(app PRIVATE -Wall -Wextra -Wpedantic) 
endif()
