SET(PROJECT_NAME MAINtest)
PROJECT(${PROJECT_NAME})
CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
option(GTEST	"use gtest!"	ON)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/bin)
set(CMAKE_EXE_LINKER_FLAGS "-ldl -lpthread")

SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -pg ")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g  -std=c++11")

FILE(GLOB_RECURSE func "./src/*.c")
FILE(GLOB_RECURSE mainc "./main/*.c")



INCLUDE_DIRECTORIES(
  "./include"
)

SET(EXECUTABLE_OUTPUT "MAINtest")


add_executable(${EXECUTABLE_OUTPUT}  ${func} ${mainc} )

TARGET_LINK_LIBRARIES(${EXECUTABLE_OUTPUT}  pthread dl)

if(GTEST)
  message(STATUS "use gtest!")
  #ENABLE_TESTING()
  LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/../../gtest/lib/)
  INCLUDE_DIRECTORIES(
    "./include"
    "./../../gtest/"
  )
  FILE(GLOB_RECURSE gtests "./gtest/*.cpp")
  ADD_EXECUTABLE(tests ${func}  ${gtests} )
  TARGET_LINK_LIBRARIES(tests libgtest.a libgtest_main.a pthread)
  #ADD_TEST(NAME fun COMMAND tests)
endif(GTEST)


  



