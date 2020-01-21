//
// Created by yanivmadmon on 1/20/20.
//

#ifndef MILESTONE2_MYCLIENTHANDLER_H
#define MILESTONE2_MYCLIENTHANDLER_H
#include <stdio.h>
#include <string>
#include <vector>
#include "ClientHandler.h"
#include "Solver.h"
#include "CacheManager.h"
#include "FileCacheManager.h"

using namespace std ;

class MyClientHandler : public ClientHandler{//ssd
    Solver<vector<string>,string>* solver ;
    CacheManager<string,string>* cacheManager;
public:
    MyClientHandler(CacheManager<string,string>* cacheManager ,Solver<vector<string>, string>* Solver ){this->cacheManager = cacheManager; this->solver = solver;};
    void handleClient(int sock_fd);
};


#endif //MILESTONE2_MYCLIENTHANDLER_H
