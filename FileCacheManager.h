//
// Created by yanivmadmon on 1/14/20.
//

#ifndef MILESTONE2_FILECACHEMANAGER_H
#define MILESTONE2_FILECACHEMANAGER_H

#include <stdio.h>
#include <unordered_map>
#include <fstream>
#include "CacheManager.h"

using namespace std;

template<typename S>

class FileCacheManager : CacheManager<string , S> {
    unordered_map<string , S> cache;
    unordered_map<string , bool> ifExist;
    int sizeCache=0;

public:
    void insert(string problem, S solution) {

        string str = hashString(problem);
        // insert to mapCache
        if(sizeCache==5) {
            cache.erase(cache.end());
            sizeCache--;
        }
        cache.insert({str, solution});
        sizeCache++;

        //insert to file cache
        ifExist.insert({str, true});
        std::ofstream toFile(str, std::ios::binary);
        toFile.write((char *) &solution, sizeof(solution));
        toFile.close();
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

     void saveSolution(string problem, S solution) {

    }

    string hashString(string str) {
        hash<string> hasher;
        size_t hash = hasher(str);
        string str1 = to_string(hash);
        return str1;
    };
};


#endif //MILESTONE2_FILECACHEMANAGER_H
