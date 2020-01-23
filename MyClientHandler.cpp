//
// Created by yanivmadmon on 1/20/20.
//

#include "MyClientHandler.h"
#include <sys/socket.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <unistd.h>
using namespace std;

void MyClientHandler:: handleClient(int client_socket)
{
    string arr[40] ;
    char buffer[1048] = {0};
    string line="";
    vector<string> matrix;
    while(true) {
        int valread = read(client_socket, buffer, 1048);

        if (valread < 0) {
            perror("ERROR reading from socket");
            break;
        }
        line = "";
        for (char c:buffer) {
            if (c == '\n') {
                if (line == "end") {
                    break;
                }
                matrix.push_back(line);
                break;
            }
            line += c;
        }

        if (line == "end") {

            if (cacheManager->ifExistSolution(matrix[0])) {
                string strSol = cacheManager->get(matrix[0]);
                int n = strSol.length();
                char char_array[n + 1];
                strcpy(char_array, strSol.c_str());
                send(client_socket, char_array, strlen(char_array), 0);
            } else {
                string strSol = solver->solve(matrix);
                cacheManager->insert(matrix[0], strSol);
                int n = strSol.length();
                char char_array[n + 10];
                strcpy(char_array, strSol.c_str());
                send(client_socket, char_array, strlen(char_array), 0);
            }
        }
    }
}