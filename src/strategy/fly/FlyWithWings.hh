#ifndef __FLY_WITH_WINGS_HH__
#define __FLY_WITH_WINGS_HH__

#include <cstdio>
#include "FlyBehavior.hh"

class FlyWithWings : public FlyBehavior{
public:
    FlyWithWings(){};
    ~FlyWithWings(){};
    void fly(){
        printf("Fly with wings~~\n");
    };
};

#endif
