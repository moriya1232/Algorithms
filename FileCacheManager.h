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

class FileCacheManager : public CacheManager<string , S> {
    unordered_map<string , S>* cache;
    unordered_map<string , string>* ifExist;
    int sizeCache=0;

public:
    FileCacheManager(){cache =  new unordered_map<string , S> ; ifExist = new unordered_map<string , string>; };
    void insert(string problem, S solution) {

        string str = hashString(problem);
        // insert to mapCache
        if(sizeCache==5) {
            cache->erase(cache->end());
            sizeCache--;
        }
        cache->insert({str, solution});
        sizeCache++;

        //insert to file cache
        ifExist->insert({problem, str});
        str= str+".txt";
        std::ofstream toFile(str, std::ios::binary);
        toFile.write((char *) &solution, sizeof(solution));
        toFile.close();
    }
/// get the solution from the cache
    S get(string problem) {
        S solu;

        //get from map cache
        if (cache->find(problem) != cache->end()) {
            return cache->find(problem);
        }

        //get from file cache
        string solutionName = ifExist->find(problem).operator->()->second + ".txt";
        std::ifstream f(solutionName, std::ios::binary);
        if (f.fail()) {
            throw ("key not exist in files");
        }
        f.read((char*) &solu, sizeof(solu));
        f.close();

        //update the map cache
        if(sizeCache==5) {
            cache->erase(cache->end()-1);
            sizeCache--;
        }
        cache->insert({ifExist->find(problem), solu});
        sizeCache++;
        return solu;
    }

    bool ifExistSolution(string problem) {

        if(ifExist->find(problem)==ifExist->end()) {
            return false;
        }
        return true;
    }

    string hashString(string str) {
        hash<string> hasher;
        size_t hash = hasher(str);
        string str1 = to_string(hash);
        return str1;
    };
};


#endif //MILESTONE2_FILECACHEMANAGER_H
