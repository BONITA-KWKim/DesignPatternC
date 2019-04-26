#ifndef __NO_PIZZA_HH__
#define __NO_PIZZA_HH__

#include "Pizza.hh"
#include "PizzaIngredientFactory.hh"

class NoPizza : public Pizza{
public:
    PizzaIngredientFactory* ingredientFactory;
    NoPizza(PizzaIngredientFactory* ingredientFactory);
    void prepare();
};

#endif



/* End of the File */
