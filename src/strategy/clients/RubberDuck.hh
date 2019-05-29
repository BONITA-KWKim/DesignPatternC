#ifndef __RUBBER_DUCK_HH__
#define __RUBBER_DUCK_HH__

#include <cstdio>
#include "Duck.hh"

class RubberDuck : public Duck{
public:
    void display(){
        printf("I am a rubber duck XD\n");
    };
};

#endif
