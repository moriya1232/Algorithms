//
// Created by yanivmadmon on 1/14/20.
//

#ifndef MILESTONE2_SOLVER_H
#define MILESTONE2_SOLVER_H

template <typename P, typename S>
class Solver {
    virtual S solve(P problem);
    virtual ~Solver(){};
};


#endif //MILESTONE2_SOLVER_H
