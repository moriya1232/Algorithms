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
 int value;
 State* father;
public:
    State(int i , int j , int cost){this->i = i ; this->j = j ; this->cost = cost;}
    int getI(){return i;}
    int getJ(){return j;}
bool equal(State* s) {
        if((s->getI()==this->getI())&&s->getJ()==this->getJ()) {
            return true;
        }
    return false;
    }
    State* setFather(State* s) {
        this->father=s;
    }
    void setCost(int c) {
        cost+=c;
    }


};


#endif //MILESTONE2_STATE_H
