cmake_minimum_required(VERSION 3.12)
project(Design_Patterns)

set(CMAKE_CXX_STANDARD 14)

add_executable(Design_Patterns main.cpp Strategy/Budget.h Strategy/Budget.cpp Strategy/Budget.h Strategy/Taxation.cpp Strategy/Taxation.h Strategy/PIS.cpp Strategy/PIS.h Strategy/ICMS.cpp Strategy/ICMS.h)