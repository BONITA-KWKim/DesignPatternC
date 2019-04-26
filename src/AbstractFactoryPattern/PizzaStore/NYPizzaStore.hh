#ifndef __NY_PIZZA_STORE_HH__
#define __NY_PIZZA_STORE_HH__


#include "PizzaStore.hh"
#include "NYPizzaIngredientFactory.hh"

/* Pizzas */
#include "NoPizza.hh"
#include "CheesePizza.hh"
#include "ClamsPizza.hh"
#include "PepperoniPizza.hh"
#include "VeggiePizza.hh"

class NYPizzaStore : public PizzaStore{
public:
    Pizza* createPizza(string type);
};


#endif



/* End of the File */
