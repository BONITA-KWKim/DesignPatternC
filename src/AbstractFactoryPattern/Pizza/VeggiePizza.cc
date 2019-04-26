#include "VeggiePizza.hh"

VeggiePizza::VeggiePizza(PizzaIngredientFactory* ingredientFactory){
    this->ingredientFactory = ingredientFactory;
}

void VeggiePizza::prepare(){
    printf("Preparing %s\n", name.c_str());
    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
}


/* End of the File */
