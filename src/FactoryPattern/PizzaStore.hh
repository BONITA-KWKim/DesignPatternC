#ifndef __PIZZA_STORE_HH__
#define __PIZZA_STORE_HH__

#include <string>
#include "Pizza.hh"

using namespace std;

class PizzaStore {
private:
    
public:
    PizzaStore();
    ~PizzaStore();
    
    Pizza* orderPizza(string type);
	virtual Pizza* createPizza(string type) = 0;
};


#endif



/* End of the File */
