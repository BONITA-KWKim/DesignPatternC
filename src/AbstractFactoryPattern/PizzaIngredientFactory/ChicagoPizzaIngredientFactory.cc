#include "ChicagoPizzaIngredientFactory.hh"

Dough* ChicagoPizzaIngredientFactory::createDough(){
    printf("Create dough in Chicago style pizza ingredient Factory\n");
    return new ThickCrustDough();
}

Sauce* ChicagoPizzaIngredientFactory::createSauce(){
    printf("Create sauce in Chicago style pizza ingredient Factory\n");
    return new PlumTomatoSauce();
}

Cheese* ChicagoPizzaIngredientFactory::createCheese(){
    printf("Create cheese in Chicago style pizza ingredient Factory\n");
    return new MozzarellaCheese();
}

Pepperoni* ChicagoPizzaIngredientFactory::createPepperoni(){
    printf("Create pepperoni in Chicago style pizza ingredient Factory\n");
    return new SlicedPepperoni();
}

Clams* ChicagoPizzaIngredientFactory::createClams(){
    printf("Create clams in Chicago style pizza ingredient Factory\n");
    return new FrozenClams();
}



/* End of the File */
