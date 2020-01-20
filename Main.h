//
// Created by yanivmadmon on 1/17/20.
//

#ifndef MILESTONE2_MAIN_H
#define MILESTONE2_MAIN_H
#include "server_side.h"
#include "MySerialServer.h"
#include "ClientHandler.h"

#include <iterator>
#include <random>

#include "MySerialServer.h"
#include "StringReverser.h"
#include "FileCacheManager.h"
#include "CacheManager.h"
#include "MyTestClientHandler.h"


using namespace std;//ds

namespace boot {
    class Main {
    public:
        int main(char* args[]){
            Solver<string, string> *solver = new StringReverser();
            CacheManager<string,string> *cache = new FileCacheManager<string>();
            MySerialServer *server  =  new MySerialServer();
            ClientHandler *client = new MyTestClientHandler(cache,solver);
            server->open(atoi(args[0]),client);
        }
    };
};




#endif //MILESTONE2_MAIN_H
