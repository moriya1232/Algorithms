//
// Created by shilo on 21.1.2020.
//

#ifndef MILESTONE2_STATE_H
#define MILESTONE2_STATE_H
#include <iostream>
#include <utility>
using namespace std;
class State {
 int i;
 int j;
 int cost;
 State* father;
public:
    State(int i , int j , int cost){this->i = i ; this->j = j ; this->cost = cost;}
    int getI(){return i;}
    int getJ(){return j;}

};


#endif //MILESTONE2_STATE_H
