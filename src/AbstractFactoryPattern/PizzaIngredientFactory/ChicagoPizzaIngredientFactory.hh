#ifndef __CHICAGO_PIZZA_INGREDIENT_FACTORY_HH__
#define __CHICAGO_PIZZA_INGREDIENT_FACTORY_HH__

#include "PizzaIngredientFactory.hh"

#include "ThickCrustDough.hh"
#include "PlumTomatoSauce.hh"
#include "MozzarellaCheese.hh"
#include "SlicedPepperoni.hh"
#include "FrozenClams.hh"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory{
public:
    Dough* createDough();
    Sauce* createSauce();
    Cheese* createCheese();
    Pepperoni* createPepperoni();
    Clams* createClams();
};

#endif


/* End of the File */
