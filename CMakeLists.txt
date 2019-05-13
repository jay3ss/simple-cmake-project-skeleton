cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-std=c++11")
project(plt)

include_directories(include)

add_library(${PROJECT_NAME}_square
	src/square.cpp
)

add_executable(mainsquare src/main.cpp)
target_link_libraries(mainsquare ${PROJECT_NAME}_square)
