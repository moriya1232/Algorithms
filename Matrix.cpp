//
// Created by yanivmadmon on 1/21/20.
//

#include "Matrix.h"
Matrix:: Matrix(vector<string>* matrixString) {
    this->MatrixString = matrixString;
    this->exit = matrixString->back();
    this->MatrixString->pop_back();
    this->enter = matrixString->back();
    this->MatrixString->pop_back();

}
State Matrix:: getInitialState(){
}
bool Matrix:: isGoalState(State s) {

}
vector<State>  Matrix:: getAllPosibleStates(State s) {

}
