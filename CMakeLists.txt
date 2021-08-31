cmake_minimum_required(VERSION 3.17)
project("Skillbox_HW_25_1" VERSION 1.0)

set(MY_INCLUDE_PATH ${CMAKE_SOURCE_DIR})

add_executable(Skillbox_HW_25_1 ${MY_INCLUDE_PATH}/main.cpp ${MY_INCLUDE_PATH}/coord.h ${MY_INCLUDE_PATH}/instruments.h)
target_include_directories(Skillbox_HW_25_1 PUBLIC ${MY_INCLUDE_PATH})
