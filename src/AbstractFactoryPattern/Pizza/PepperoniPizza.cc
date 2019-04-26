#include "PepperoniPizza.hh"

PepperoniPizza::PepperoniPizza(PizzaIngredientFactory* ingredientFactory){
    this->ingredientFactory = ingredientFactory;
}

void PepperoniPizza::prepare(){
    printf("Preparing %s\n", name.c_str());
    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
    pepperoni = ingredientFactory->createPepperoni();
}


/* End of the File */
