cmake_minimum_required(VERSION 3.13)  # Specify the minimum required CMake version

set(TSTNAME ${CMAKE_PROJECT_NAME}_tst)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

set(SOURCES ${TEST_SOURCES})

add_executable(${TSTNAME} ${TEST_SOURCES})

add_test(NAME ${TSTNAME} COMMAND ${TSTNAME})

target_link_libraries(${TSTNAME} PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest gtest_main)