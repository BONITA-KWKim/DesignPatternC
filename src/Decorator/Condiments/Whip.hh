#ifndef __WHIP_HH__
#define __WHIP_HH__

#include <string>

#include "CondimentDecorator.hh"

using namespace std;

class Whip : public CondimentDecorator{
public:
    Whip(Beverage* beverage) : CondimentDecorator(beverage){};
    ~Whip(){};
    string getDescription();
    double cost();
};

#endif

