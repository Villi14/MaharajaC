cmake_minimum_required(VERSION 3.0.0)
project(MaharajaC VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

include(CTest)
enable_testing()

include_directories(include)

add_executable(MaharajaC 
               src/app.cpp
               src/Game.cpp)

set(TIMEOUT 1)

add_test(ScoreTest MaharajaC 100)

set_tests_properties(ScoreTest
PROPERTIES TIMEOUT ${TIMEOUT})

set_tests_properties(ScoreTest PROPERTIES
PASS_REGULAR_EXPRESSION "Succes! The score is: 100"
FAIL_REGULAR_EXPRESSION "Error!")


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
