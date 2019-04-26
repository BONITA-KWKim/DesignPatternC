#include "NYPizzaIngredientFactory.hh"

Dough* NYPizzaIngredientFactory::createDough(){
    printf("Create dough in New York style pizza ingredient Factory\n");
    return new ThinCrustDough();
}

Sauce* NYPizzaIngredientFactory::createSauce(){
    printf("Create sauce in New York style pizza ingredient Factory\n");
    return new MarinaraSauce();
}

Cheese* NYPizzaIngredientFactory::createCheese(){
    printf("Create cheese in New York style pizza ingredient Factory\n");
    return new ReggianoCheese();
}

Pepperoni* NYPizzaIngredientFactory::createPepperoni(){
    printf("Create pepperoni in New York style pizza ingredient Factory\n");
    return new SlicedPepperoni();
}

Clams* NYPizzaIngredientFactory::createClams(){
    printf("Create clams in New York style pizza ingredient Factory\n");
    return new FreshClams();
}



/* End of the File */
