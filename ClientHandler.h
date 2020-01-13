//
// Created by shilo on 13.1.2020.
//

#ifndef MILESTONE2_CLIENTHANDLER_H
#define MILESTONE2_CLIENTHANDLER_H

#include <fstream>
#include <stdio.h>

class ClientHandler {
virtual void handleClient(std::ifstream input,std::ostream output);
};


#endif //MILESTONE2_CLIENTHANDLER_H
