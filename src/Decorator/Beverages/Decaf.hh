#ifndef __DECAF_HH__
#define __DECAF_HH__

#include <string>
#include "Beverage.hh"

using namespace std;

class Decaf : public Beverage{
public:
    double cost();
    string getDescription();
};

#endif

