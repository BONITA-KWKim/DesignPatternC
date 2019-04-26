#ifndef __CLAMS_PIZZA_HH__
#define __CLAMS_PIZZA_HH__

#include "Pizza.hh"
#include "PizzaIngredientFactory.hh"

class ClamsPizza : public Pizza{
public:
    PizzaIngredientFactory* ingredientFactory;
    ClamsPizza(PizzaIngredientFactory* ingredientFactory);
    void prepare();
};

#endif

