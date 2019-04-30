#ifndef __SOY_HH__
#define __SOY_HH__

#include <string>

#include "CondimentDecorator.hh"

using namespace std;

class Soy : public CondimentDecorator{
public:
    Soy(Beverage* beverage) : CondimentDecorator(beverage){};
    ~Soy(){};
    string getDescription();
    double cost();
};

#endif

