//
// Created by shilo on 13.1.2020.
//

#ifndef MILESTONE2_MYTESTCLIENTHANDLER_H
#define MILESTONE2_MYTESTCLIENTHANDLER_H

#include <stdio.h>
#include <string>
#include "ClientHandler.h"
#include "Solver.h"
using namespace std ;

class MyTestClientHandler:ClientHandler {
    Solver<string, string>* solver ;
public:
     void handleClient(std::ifstream input,std::ostream output);

};


#endif //MILESTONE2_MYTESTCLIENTHANDLER_H
