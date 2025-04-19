cmake_minimum_required(VERSION 3.12.0)


project(TestClang)

set(CMAKE_CXX_STANDARD 20)


include_directories(include)  
add_executable(${CMAKE_PROJECT_NAME}
    main.cpp    
    src/MulFile.cpp
    )

