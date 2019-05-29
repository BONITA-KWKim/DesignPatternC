#ifndef __DECOY_DUCK_HH__
#define __DECOY_DUCK_HH__

#include <cstdio>
#include "Duck.hh"

class DecoyDuck : public Duck{
public:
    void display(){
        printf("I am a decoy duck XD\n");
    };
};

#endif
