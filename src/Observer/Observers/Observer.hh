#ifndef __OBSERVER_HH_
#define __OBSERVER_HH_

class Observer{
public:
    Observer(){};
    ~Observer(){};
    virtual void update(float temp, float humidity, float pressure)=0;
};

#endif
