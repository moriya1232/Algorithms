//
// Created by shilo on 21.1.2020.
//

#ifndef MILESTONE2_STATE_H
#define MILESTONE2_STATE_H
#include <iostream>
#include <utility>
using namespace std;
//template <typename T>
class State {
 pair <int,int> point;
 int cost;

public:
    pair<int,int> getPoint() {
        return this->point;
    }

    int getCost() {
        return this->cost;
    };
};


#endif //MILESTONE2_STATE_H
