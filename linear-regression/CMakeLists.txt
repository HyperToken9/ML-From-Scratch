cmake_minimum_required(VERSION 3.0)
project(LinearRegression)

add_executable(
    ${PROJECT_NAME}
        main.cpp
)

target_link_libraries(
    ${PROJECT_NAME}
    PRIVATE
        DataReader
)