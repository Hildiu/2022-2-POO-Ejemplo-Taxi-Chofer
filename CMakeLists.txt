cmake_minimum_required(VERSION 3.23)
project(Chofer_Taxi)

set(CMAKE_CXX_STANDARD 23)

add_executable(Chofer_Taxi main.cpp CChofer.cpp CChofer.h Tipos.h CTaxi.cpp CTaxi.h)
