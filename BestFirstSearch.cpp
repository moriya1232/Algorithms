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
        if (n->equal(problem->getGoalState())) {
            return solution(closed,problem);
        }
        vector<State *>* neighbors = problem->getAllPosibleStates(n);
        for (State *s:*neighbors) {
            if ((closed->find(s) != closed->end()) && (openList->conteint(s))) {
                s->setFather(n);
                s->setCost(n->getCost());
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

string BestFirstSearch::solution(set<State*>*,Searcheable* problem) {
    string sol="";
    State* s=problem->getGoalState();
    while(!(s == NULL)) {
        State* iter=s->getFather();
        if(s->getI()>iter->getI()) {
            string temp="Down (" +s->getCost();
            temp+="), "+ sol;
            sol=temp;
        } else if (s->getI()<iter->getI()) {
            string temp="Up (" +s->getCost();
            temp+="), "+ sol;
            sol=temp;
        } else if (s->getJ()>iter->getJ()) {
            string temp="Right (" +s->getCost();
            temp+="), "+ sol;
            sol=temp;
        } else if (s->getJ()<iter->getJ()) {
            string temp="Left (" +s->getCost();
            temp+="), "+ sol;
            sol=temp;
        }
        s=s->getFather();
    }
    return sol;
}
