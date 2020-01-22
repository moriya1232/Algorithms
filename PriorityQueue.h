//
// Created by shilo on 22.1.2020.
//

#ifndef MILESTONE2_PRIORITYQUEUE_H
#define MILESTONE2_PRIORITYQUEUE_H

#include <queue>
#include "State.h"
#include <functional>

using namespace std;
class PriorityQueue {


public:
    priority_queue <State*, vector<State*>, typename State::myComparator > *queue;
    PriorityQueue() {
        queue = new priority_queue <State*, vector<State*>, typename State::myComparator >();
    }

    bool conteint(State *s) {

        vector<State *> tempArr;
        while (!queue->empty()) {
            State *current = queue->top();
            queue->pop();
            if (s->equal(current)) {
                for (State *s:tempArr) {
                    queue->push(s);
                }
                return true;
            }
        }
        for (State *s:tempArr) {
            queue->push(s);
            return false;
        }
    }
};


#endif //MILESTONE2_PRIORITYQUEUE_H
