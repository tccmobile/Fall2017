cmake_minimum_required(VERSION 3.8)
project(Fall2017)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES  ItemToPurchase.cpp ItemToPurchase.h ShoppingCart.h ShoppingCart.cpp main.cpp)
add_executable(Fall2017 ${SOURCE_FILES})