#ifndef __DARK_ROAST_HH__
#define __DARK_ROAST_HH__

#include <string>
#include "Beverage.hh"

using namespace std;

class DarkRoast : public Beverage{
public:
    double cost();
    string getDescription();
};

#endif

