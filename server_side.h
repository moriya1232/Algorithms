//
// Created by shilo on 13.1.2020.
//

#ifndef MILESTONE2_SERVER_SIDE_H
#define MILESTONE2_SERVER_SIDE_H
#include <iostream>
#include "ClientHandler.h"
using namespace std;
namespace server_side {
     class Server {
     public:
         virtual void open(int port, ClientHandler c);
         virtual void close();
     };
};



#endif //MILESTONE2_SERVER_SIDE_H
