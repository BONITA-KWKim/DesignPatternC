#ifndef __CONDIMENT_DECORATOR_HH__
#define __CONDIMENT_DECORATOR_HH__

#include <string>

#include "Beverage.hh"

using namespace std;

class CondimentDecorator : public Beverage{
public:
    virtual string getDescription()=0;
};

#endif
