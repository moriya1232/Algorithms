//
// Created by shilo on 13.1.2020.
//

#ifndef MILESTONE2_MYTESTCLIENTHANDLER_H
#define MILESTONE2_MYTESTCLIENTHANDLER_H

#include <stdio.h>
#include <string>
#include "ClientHandler.h"
#include "Solver.h"
#include "CacheManager.h"

using namespace std ;

class MyTestClientHandler: public ClientHandler {
    Solver<string, string>* solver ;
    CacheManager<string,string>* cacheManager;
public:
     void handleClient(int sock_fd);
};


#endif //MILESTONE2_MYTESTCLIENTHANDLER_H
