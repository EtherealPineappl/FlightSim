add_library(core STATIC src/core.cpp)
target_include_directories(core PUBLIC include)
target_compile_features(core PUBLIC cxx_std_20)

target_compile_options(core PRIVATE /W4)