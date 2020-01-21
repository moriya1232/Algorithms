//
// Created by yanivmadmon on 1/21/20.
//

#include "Matrix.h"
Matrix:: Matrix(vector<string>* matrixString) {
    int sizeM = matrixString->size() -2 ;
    this->n = sizeM ;
    vector<State*> line ;
    string cost;
    for ( int i= 0 ; i< sizeM ; i++) {
        for (int j = 0; j < sizeM; j++) {
            int find = matrixString->at(i).find(",", j + 1);
            cost = matrixString->at(i).substr(find + 1, 1);
            State *tempState = new State(i, j, stoi(cost));
            line.push_back(tempState);
        }
        this->MatrixStates->at(i) = line;
    }
}
State Matrix:: getInitialState(){
}
bool Matrix:: isGoalState(State s) {

}
vector<State>  Matrix:: getAllPosibleStates(State s) {

}
