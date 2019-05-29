#ifndef __CLIENT_DUCK__
#define __CLIENT_DUCK__

#include "QuackBehavior.hh"
#include "FlyBehavior.hh"

class Duck{
public:
    void performQuack(){
        quack->quack();
    };
    void performFly(){
        fly->fly();
    };
    void setQuackBehavior(QuackBehavior* quack){
        this->quack = quack;
    };
    void setFlyBehavior(FlyBehavior* fly){
        this->fly = fly;
    };
    virtual void display()=0;
private:
    QuackBehavior* quack;
    FlyBehavior* fly;
};

#endif
