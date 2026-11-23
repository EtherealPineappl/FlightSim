add_library(graphics STATIC src/graphics.cpp)
target_include_directories(graphics PUBLIC include)
target_compile_features(graphics PUBLIC cxx_std_20)

target_compile_options(graphics PRIVATE /W4)