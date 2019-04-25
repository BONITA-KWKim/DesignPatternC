#ifndef __PIZZA_HH__
#define __PIZZA_HH__

#include <string>
#include <vector>

using namespace std;

class Pizza{
public:
    string name;
    string dough;
    string sauce;
    vector<string> toppings;
    
    void prepare();
    void bake();
    void cut();
    void box();
};

#endif

/* End of the File */
