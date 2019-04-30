#ifndef __MILK_HH__
#define __MILK_HH__

#include <string>

#include "CondimentDecorator.hh"

using namespace std;

class Milk : public CondimentDecorator{
public:
    Milk(Beverage* beverage) : CondimentDecorator(beverage){};
    ~Milk(){};
    string getDescription();
    double cost();
};

#endif

