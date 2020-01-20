//
// Created by yanivmadmon on 1/20/20.
//

#ifndef MILESTONE2_SEARCHER_H
#define MILESTONE2_SEARCHER_H

#include <string>
#include "Searchable.h"

using namespace std ;
class Searcher {
public:
    virtual string search(Searchable* searchable) = 0;
    virtual ~Searcher(){};
    virtual int getNodes() = 0;
};


#endif //MILESTONE2_SEARCHER_H
