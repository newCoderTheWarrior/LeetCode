cmake_minimum_required(VERSION 3.10)

#set the project name
project(LeetCode)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
#add the executable
add_executable(main main.cpp JZOF/JZ_2_2_AddBinary.h "code daily/LC_338_CountBits.h" "code daily/LC_498_FindDiagonalOrder.h" JZOF/JZ_2_4_SingleNumber.h)
add_executable(daily20220618 "code daily/JZOF_2_29_orderedCycleLinklist.cpp")