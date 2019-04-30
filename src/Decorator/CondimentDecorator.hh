#ifndef __CONDIMENT_DECORATOR_HH__
#define __CONDIMENT_DECORATOR_HH__

#include <string>

#include "Beverage.hh"

using namespace std;

class CondimentDecorator : public Beverage{
public:
    CondimentDecorator(Beverage* beverage) : beverage(beverage) { };
    ~CondimentDecorator() {delete this->beverage;};
    string getDescription(){return beverage->getDescription();};

protected:
    Beverage* beverage;
};

#endif
