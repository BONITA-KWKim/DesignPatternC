#ifndef __MALLARD_DUCK_HH__
#define __MALLARD_DUCK_HH__

#include <cstdio>
#include "Duck.hh"

class MallardDuck : public Duck{
public:
    void display(){
        printf("I am a mallard duck XD\n");
    };
};

#endif
