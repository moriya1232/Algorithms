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
#include "MyClientHandler.h"


using namespace std;//ds

namespace boot {
    class Main {
    public:
        int main(char* args[]){
            Solver<vector<string>, string> *solver ;
            CacheManager<string,string> *cache = new FileCacheManager<string>();
            MySerialServer *server  =  new MySerialServer();
            ClientHandler *client = new MyClientHandler(cache , solver);
            server->open(atoi(args[0]),client);
        }
    };
};




#endif //MILESTONE2_MAIN_H
