cmake_minimum_required(VERSION 3.15)
project(mileStone2)

set(CMAKE_CXX_STANDARD 14)

add_executable(mileStone2 server_side.cpp server_side.h MySerialServer.cpp MySerialServer.h ClientHandler.cpp ClientHandler.h MyTestClientHandler.cpp MyTestClientHandler.h)