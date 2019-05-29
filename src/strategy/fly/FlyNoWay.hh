#ifndef __FLY_NO_WAY_HH__
#define __FLY_NO_WAY_HH__

#include <cstdio>
#include "FlyBehavior.hh"

class FlyNoWay : public FlyBehavior{
public:
    FlyNoWay(){};
    ~FlyNoWay(){};
    void fly(){
        printf("Nothing to do for flying\n");
    };
};

#endif
