#ifndef __HOUSE_BLEND_HH__
#define __HOUSE_BLEND_HH__

#include <string>
#include "Beverage.hh"

using namespace std;

class HouseBlend : public Beverage{
public:
    double cost();
    string getDescription();
};

#endif

