#ifndef __PIZZA_HH__
#define __PIZZA_HH__

#include <string>
#include <vector>

#include "Dough.hh"
#include "Sauce.hh"
#include "Cheese.hh"
#include "Pepperoni.hh"
#include "Clams.hh"

using namespace std;

class Pizza{
public:
    string name;
    vector<string> toppings;
    
    Dough* dough;
    Sauce* sauce;
    Cheese* cheese;
    Pepperoni* pepperoni;
    Clams* clams;

    virtual void prepare()=0;
    void bake();
    void cut();
    void box();
    
    void setName(string name);
    string getName();
};

#endif



/* End of the File */
