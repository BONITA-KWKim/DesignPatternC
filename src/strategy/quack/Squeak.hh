#ifndef __SQUEAK_HH__
#define __SQUEAK_HH__

#include <cstdio>
#include "QuackBehavior.hh"

class Squeak : public QuackBehavior{
public:
    Squeak(){};
    ~Squeak(){};
    void quack(){
        printf("Squeak! Squeak!\n");
    };
};

#endif
