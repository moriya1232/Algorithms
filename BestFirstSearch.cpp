//
// Created by shilo on 22.1.2020.
//

#include "BestFirstSearch.h"
#include <vector>
#include <set>
#include "PriorityQueue.h"
string BestFirstSearch::search(Searcheable *problem) {
    PriorityQueue *openList = new PriorityQueue();
    openList->queue->push(problem->getInitialState());
    set<State *> *closed = new set<State *>();
    while (openList->queue->size() > 0) {
        State *n = popFromOpenList(openList);
        closed->insert(n);
        if (problem->isGoalState(n)) {
            return solution(closed);
        }
        vector<State *> neighbors = problem->getAllPosibleStates(n);
        for (State *s:neighbors) {
            if ((closed->find(s) != closed->end()) && (openList->conteint(s))) {
                s->setFather(n);
                openList->queue->push(s);
            }
            else {
                if(s->getCost()<n->getCost()+s->getValue()) {
                    s->setCost(n->getCost()+s->getValue());
                    s->setFather(n);
                }
            }

        }
    }
}
