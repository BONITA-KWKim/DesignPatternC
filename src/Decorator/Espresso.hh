#ifndef __ESPRESSO_HH__
#define __ESPRESSO_HH__

#include <cstdio>
#include <string>
#include "Beverage.hh"

using namespace std;

class Espresso : public Beverage{
public:
    double cost();
    string getDescription();
};

#endif
