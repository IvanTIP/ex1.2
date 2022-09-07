cmake_minimum_required(VERSION 3.20)

add_executable(ex1 main.cpp ${MY_INCLUDE_DIR}/person_interaction.h ${MY_INCLUDE_DIR}/tools.h)
target_include_directories(ex1 PUBLIC ${MY_INCLUDE_DIR})