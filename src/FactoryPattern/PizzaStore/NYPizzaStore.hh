#ifndef __NY_PIZZA_STORE_HH__
#define __NY_PIZZA_STORE_HH__


#include "PizzaStore.hh"

/* Pizzas */
#include "NoPizza.hh"
#include "NYCheesePizza.hh"
#include "NYClamPizza.hh"
#include "NYPepperoniPizza.hh"
#include "NYVeggiePizza.hh"

class NYPizzaStore : public PizzaStore{
public:
    Pizza* createPizza(string type);
};


#endif



/* End of the File */
