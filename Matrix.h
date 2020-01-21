//
// Created by yanivmadmon on 1/21/20.
//

#ifndef MILESTONE2_MATRIX_H
#define MILESTONE2_MATRIX_H


#include "Searcheable.h"
#include "State.h"


class Matrix : public Searcheable{
    vector<string>* MatrixString;
    string enter ;
    string exit ;
public:
    Matrix(vector<string>* matrixString);
    State getInitialState() override;
    bool isGoalState(State s) override ;
    vector<State> getAllPosibleStates(State s) override ;

};


#endif //MILESTONE2_MATRIX_H
