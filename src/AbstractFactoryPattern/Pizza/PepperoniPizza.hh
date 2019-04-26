#ifndef __PEPPERONI_PIZZA_HH__
#define __PEPPERONI_PIZZA_HH__

#include "Pizza.hh"
#include "PizzaIngredientFactory.hh"

class PepperoniPizza : public Pizza{
public:
    PizzaIngredientFactory* ingredientFactory;
    PepperoniPizza(PizzaIngredientFactory* ingredientFactory);
    void prepare();
};

#endif



/* End of the File */
