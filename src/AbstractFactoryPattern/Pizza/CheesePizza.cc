#include "CheesePizza.hh"

CheesePizza::CheesePizza(PizzaIngredientFactory* ingredientFactory){
    this->ingredientFactory = ingredientFactory;
}

void CheesePizza::prepare(){
    printf("Preparing %s\n", name.c_str());
    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
}



/* End of the File */
