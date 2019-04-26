#ifndef __CHEESE_PIZZA_HH__
#define __CHEESE_PIZZA_HH__

#include "Pizza.hh"
#include "PizzaIngredientFactory.hh"

class CheesePizza : public Pizza{
public:
    PizzaIngredientFactory* ingredientFactory;
    CheesePizza(PizzaIngredientFactory* ingredientFactory);
    void prepare();
};

#endif
