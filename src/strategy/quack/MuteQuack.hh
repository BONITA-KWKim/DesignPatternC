#ifndef __MUTE_QUACK_HH__
#define __MUTE_QUACK_HH__

#include <cstdio>
#include "QuackBehavior.hh"

class MuteQuack : public QuackBehavior{
public:
    MuteQuack(){};
    ~MuteQuack(){};
    void quack(){
        printf("Silent :D\n");
    };
};

#endif
