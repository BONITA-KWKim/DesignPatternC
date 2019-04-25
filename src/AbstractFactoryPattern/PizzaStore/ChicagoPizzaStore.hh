#ifndef __CHICAGO_PIZZA_STORE_HH__
#define __CHICAGO_PIZZA_STORE_HH__


#include "PizzaStore.hh"

/* Pizzas */
#include "NoPizza.hh"
#include "ChicagoCheesePizza.hh"
#include "ChicagoClamPizza.hh"
#include "ChicagoPepperoniPizza.hh"
#include "ChicagoVeggiePizza.hh"

class ChicagoPizzaStore : public PizzaStore{
public:
    Pizza* createPizza(string type);
};


#endif




/* End of the File */
