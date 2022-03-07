cmake_minimum_required(VERSION 3.21)

add_executable(DZ25 main.cpp instruments.cpp)

target_include_directories(DZ25 PUBLIC ${CMAKE_SOURCE_DIR}/include)