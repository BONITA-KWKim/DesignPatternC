#ifndef __CHICAGO_PIZZA_STORE_HH__
#define __CHICAGO_PIZZA_STORE_HH__


#include "PizzaStore.hh"
#include "ChicagoPizzaIngredientFactory.hh"

/* Pizzas */
#include "NoPizza.hh"
#include "CheesePizza.hh"
#include "ClamsPizza.hh"
#include "PepperoniPizza.hh"
#include "VeggiePizza.hh"

class ChicagoPizzaStore : public PizzaStore{
public:
    Pizza* createPizza(string type);
};


#endif



/* End of the File */
