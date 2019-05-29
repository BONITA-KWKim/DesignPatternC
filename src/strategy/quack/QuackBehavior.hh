#ifndef __QUACK_BEHAVIOR_HH__
#define __QUACK_BEHAVIOR_HH__

class QuackBehavior{
public:
    QuackBehavior(){};
    ~QuackBehavior(){};
    virtual void quack()=0;
};

#endif
