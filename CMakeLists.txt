cmake_minimum_required(VERSION 3.10)
project(CS2Calculator)

include_directories(include)
add_executable(calculator test.cpp src/calculator.cpp)

