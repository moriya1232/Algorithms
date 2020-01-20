cmake_minimum_required(VERSION 3.15)
project(mileStone2)

set(CMAKE_CXX_STANDARD 14)

add_executable(mileStone2 server_side.cpp server_side.h MySerialServer.cpp MySerialServer.h ClientHandler.cpp ClientHandler.h MyTestClientHandler.cpp MyTestClientHandler.h Solver.cpp Solver.h FileCacheManager.cpp FileCacheManager.h CacheManager.cpp CacheManager.h StringReverser.cpp StringReverser.h Main.cpp Main.h Searcher.cpp Searcher.h Searcheable.cpp Searcheable.h State.cpp State.h)