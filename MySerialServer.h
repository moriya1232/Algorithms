//
// Created by shilo on 13.1.2020.
//

#ifndef MILESTONE2_MYSERIALSERVER_H
#define MILESTONE2_MYSERIALSERVER_H

#include "server_side.h"
using namespace std ;

class MySerialServer: public server_side::Server {
static bool stopRun;
public:
    MySerialServer(){this->stopRun = false;}
     int open(int port, ClientHandler* c);
     void stop();
     static int openS(int port , ClientHandler* clientHandler);

};


#endif //MILESTONE2_MYSERIALSERVER_H
