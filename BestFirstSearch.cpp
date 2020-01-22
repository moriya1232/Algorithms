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

        }
    }
}


//public override Solution search(Isearchable searchable) { // Searcher's abstract method overriding
//addToOpenList(searchable. getInitialState ()); // inherited from Searcher
//HashSet<State> closed = new HashSet<State>();
//while (OpenListSize > 0) {
//State n = popOpenList(); // inherited from Searcher, removes the best state
//closed.Add(n);
//if (n.Equals(searchable. getIGoallState ()))
//return backTrace(); // private method, back traces through the parents
//// calling the delegated method, returns a list of states with n as a parent
//List<State> succerssors = searchable. getAllPossibleStates(n);
//foreach (State s in succerssors)
//{
//if (!closed.Contains(s) && !openContaines(s))
//{
//// s.setCameFrom(n); // already done by getSuccessors
//addToOpenList(s);
//}
//else