cmake_minimum_required(VERSION 4.0.0)


project(TestClang)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)  # 生成 compile_commands.json

# 显式自定义 C++20 标志（用于 Clangd 识别）
add_compile_options(-std=c++20)

include_directories(include)  
add_executable(${CMAKE_PROJECT_NAME}
    main.cpp    
    src/MulFile.cpp
    src/TestClangFormat.cpp
    )

