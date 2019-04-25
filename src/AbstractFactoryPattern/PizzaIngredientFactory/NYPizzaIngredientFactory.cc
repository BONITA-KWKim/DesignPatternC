#include "NYPizzaIngredientFactory.hh"

Dough* NYPizzaIngredientFactory::createDough(){
    return new ThinCrustDough();
}

Sauce* NYPizzaIngredientFactory::createSauce(){
    return new MarinaraSauce();
}

Cheese* NYPizzaIngredientFactory::createCheese(){
    return new ReggianoCheese();
}

Pepperoni* NYPizzaIngredientFactory::createPepperoni(){
    return new SlicedPepperoni();
}

/*
Clams* NYPizzaIngredientFactory::createClams(){
    return new FreshClams();
}
*/



/* End of the File */
