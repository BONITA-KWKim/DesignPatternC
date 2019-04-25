#ifndef __NY_PIZZA_INGREDIENT_FACTORY_HH__
#define __NY_PIZZA_INGREDIENT_FACTORY_HH__

#include "PizzaIngredientFactory.hh"

#include "ThinCrustDough.hh"
#include "MarinaraSauce.hh"
#include "ReggianoCheese.hh"
#include "SlicedPepperoni.hh"
#include "FreshClams.hh"

class NYPizzaIngredientFactory : public PizzaIngredientFactory{
public:
    Dough* createDough();
    Sauce* createSauce();
    Cheese* createCheese();
    Pepperoni* createPepperoni();
    //Clams* createClams();
};

#endif


/* End of the File */
