//
// Created by yanivmadmon on 1/14/20.
//

#ifndef MILESTONE2_CACHEMANAGER_H
#define MILESTONE2_CACHEMANAGER_H

#include <stdio.h>
#include <unordered_map>
using namespace std ;
template <typename P, typename S>

class CacheManager {
    unordered_map <P,S> cache;
public:
     void insert (P problem , S solution);
     S get(P problem) ;
    virtual ~CacheManager(){};
};


#endif //MILESTONE2_CACHEMANAGER_H
