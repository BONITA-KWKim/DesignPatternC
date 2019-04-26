#include "ClamsPizza.hh"

ClamsPizza::ClamsPizza(PizzaIngredientFactory* ingredientFactory){
    this->ingredientFactory = ingredientFactory;
}

void ClamsPizza::prepare(){
    printf("Preparing %s\n", name.c_str());
    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
    clams = ingredientFactory->createClams();
}


/* End of the File */

