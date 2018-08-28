cmake_minimum_required(VERSION 3.10)
project(untitled1)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

include_directories(/home/alejandro/CLionProjects/Robot/lib/jansson-2.11/src)

add_executable(untitled1 src/main.cpp src/Robot.cpp src/Motor.cpp src/Controller.cpp)

target_link_libraries(untitled1 /home/alejandro/CLionProjects/Robot/lib/jansson-2.11/src/.libs/libjansson.so)
