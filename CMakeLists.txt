cmake_minimum_required(VERSION 3.24.2)
project(testproj CXX)

set(RESOURCES main.cpp candle.cpp candle.h tests.h)

add_executable(${PROJECT_NAME} ${RESOURCES})
