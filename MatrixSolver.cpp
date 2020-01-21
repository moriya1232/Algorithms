//
// Created by yanivmadmon on 1/21/20.
//

#include "MatrixSolver.h"
#include "Matrix.h"

string MatrixSolver:: solve(vector<string> matrix){

    Matrix* matrixProblem = new Matrix(&matrix) ;
    this->searcher->search(matrixProblem);
}

