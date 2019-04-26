#include "NoPizza.hh"

NoPizza::NoPizza(PizzaIngredientFactory* ingredientFactory){
    this->ingredientFactory = ingredientFactory;
}

void NoPizza::prepare(){
    printf("Preparing %s\n", name.c_str());
}


/* End of the File */
