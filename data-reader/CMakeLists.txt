cmake_minimum_required(VERSION 3.0)
project(DataReader)

add_library(
    ${PROJECT_NAME} 
    src/csvreader.cpp
)

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
        include
)