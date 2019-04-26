#include "ChicagoPizzaStore.hh"

Pizza* ChicagoPizzaStore::createPizza(string item)
{
    Pizza* pizza = NULL;
    PizzaIngredientFactory* ingredientFactory = new ChicagoPizzaIngredientFactory();
    
    if(0 == item.compare("Cheese")){
        pizza = new CheesePizza(ingredientFactory);
        pizza->setName("Chicago Style Cheese Pizza");
    }
    else if(0 == item.compare("Clams")){
        pizza = new ClamsPizza(ingredientFactory);
        pizza->setName("Chicago Style Clams Pizza");
    }
    else if(0 == item.compare("Pepperoni")){
        pizza = new PepperoniPizza(ingredientFactory);
        pizza->setName("Chicago Style Pepperoni Pizza");
    }
    else if(0 == item.compare("Veggie")){
        pizza = new VeggiePizza(ingredientFactory);
        pizza->setName("Chicago Style Veggie Pizza");
    }
    else{
        pizza = new NoPizza(ingredientFactory);
        pizza->setName("No Pizza");
    }
    return pizza;
}


/* End of the File */
