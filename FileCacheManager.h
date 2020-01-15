//
// Created by yanivmadmon on 1/14/20.
//

#ifndef MILESTONE2_FILECACHEMANAGER_H
#define MILESTONE2_FILECACHEMANAGER_H

#include <stdio.h>
#include <unordered_map>
#include "CacheManager.h"

using namespace std;

template<typename S>

class FileCacheManager : CacheManager<string , S> {
    unordered_map<std::size_t , S> cache;
    unordered_map<std::size_t , string> ifExist;

public:
    void insert(string problem, S solution) {

    }

    S get(string problem) {

        if (cache.find(problem) != cache.end()) {
            return cache.find(problem);
        }


    }

    bool ifExistSolution(string problem) {

        if(ifExist.find(problem)==ifExist.end()) {
            return false;
        }
        return true;
    }

    virtual void saveSolution(string problem, S solution) {

    }
    size_t hashOb(string str) {
        hash<string> hasher;
        size_t hash = hasher(str);
        return hash;
    };
};


#endif //MILESTONE2_FILECACHEMANAGER_H
