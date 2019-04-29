#ifndef __MOCHA_HH__
#define __MOCHA_HH__

#include <cstdio>
#include <string>

#include "Beverage.hh"
#include "CondimentDecorator.hh"

using namespace std;

class Mocha : public CondimentDecorator{
public:
    Mocha(Beverage* beverage);
    string getDescription();
    double cost();
    
private:
    Beverage* beverage;
};

#endif
