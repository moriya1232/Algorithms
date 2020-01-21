//
// Created by shilo on 20.1.2020.
//

#ifndef MILESTONE2_SEARCHEABLE_H
#define MILESTONE2_SEARCHEABLE_H

#include <stdio.h>
#include "State.h"
#include <vector>
using namespace std;

class Searcheable {

    virtual State getInitialState();

    virtual bool isGoalState(State s);

    virtual vector<State> getAllPosibleStates(State s);
};


#endif //MILESTONE2_SEARCHEABLE_H
