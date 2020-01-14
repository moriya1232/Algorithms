//
// Created by shilo on 13.1.2020.
//

#ifndef MILESTONE2_MYSERIALSERVER_H
#define MILESTONE2_MYSERIALSERVER_H

#include "server_side.h"

class MySerialServer:server_side::Server {
     void open(int port, ClientHandler c);
     void close();

};


#endif //MILESTONE2_MYSERIALSERVER_H
