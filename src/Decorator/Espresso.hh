#ifndef __ESPRESSO_HH__
#define __ESPRESSO_HH__

#include <string>
#include "Beverage.hh"

using namespace std;

class Espresso : public Beverage{
public:
    Espresso();
    double cost();
};

#endif
