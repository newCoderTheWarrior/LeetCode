cmake_minimum_required(VERSION 3.10)

#set the project name
project(LeetCode)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
#add the executable
add_executable(main main.cpp JZOF/JZ_2_2_AddBinary.h JZOF/LC338_countBits.h "code daily/LC_498_FindDiagonalOrder.h" JZOF/JZ_2_4_SingleNumber.h)