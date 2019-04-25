#ifndef __PIZZA_INGREDIENT_FACTORY_HH__
#define __PIZZA_INGREDIENT_FACTORY_HH__

#include "Dough.hh"
#include "Sauce.hh"
#include "Cheese.hh"
//#include "Veggies.hh"
#include "Pepperoni.hh"
#include "Clams.hh"

class PizzaIngredientFactory{
public:
    virtual Dough* createDough()=0;
    virtual Sauce* createSauce()=0;
    virtual Cheese* createCheese()=0;
    //Veggies[] createVeggies();
    virtual Pepperoni* createPepperoni()=0;
    virtual Clams* createClams()=0;
};

#endif


/* End of the File */
