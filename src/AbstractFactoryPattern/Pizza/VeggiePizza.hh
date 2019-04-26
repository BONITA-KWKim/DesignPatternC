#ifndef __VEGGIE_PIZZA_HH__
#define __VEGGIE_PIZZA_HH__

#include "Pizza.hh"
#include "PizzaIngredientFactory.hh"

class VeggiePizza : public Pizza{
public:
    PizzaIngredientFactory* ingredientFactory;
    VeggiePizza(PizzaIngredientFactory* ingredientFactory);
    void prepare();
};

#endif

