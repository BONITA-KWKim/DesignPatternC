#ifndef __QUACK_HH__
#define __QUACK_HH__

#include <cstdio>
#include "QuackBehavior.hh"

class Quack : public QuackBehavior{
public:
    Quack(){};
    ~Quack(){};
    void quack(){
        printf("Quack! Quack!\n");
    };
};

#endif
