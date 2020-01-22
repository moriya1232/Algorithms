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
    return (s->getI() == this->getI()) && s->getJ() == this->getJ();
}
    State* setFather(State* s) {
        this->father=s;
    }
    void setCost(int c) {
        cost+=c;
    }
    int getValue() const {
        return this->value;
    }
    int getCost() const {
        return this->cost;
    }

    class myComparator
    {
    public:
        int operator() (const State* s1, const State* s2)
        {
            return s1->getCost() > s2->getCost();
        }
    };
};


#endif //MILESTONE2_STATE_H
