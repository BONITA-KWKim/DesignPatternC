#ifndef __MOCHA_HH__
#define __MOCHA_HH__

#include <cstdio>
#include <string>

#include "CondimentDecorator.hh"

using namespace std;

class Mocha : public CondimentDecorator{
public:
    Mocha(Beverage* beverage) : CondimentDecorator(beverage){};
    ~Mocha(){};
    string getDescription();
    double cost();
};
#endif
