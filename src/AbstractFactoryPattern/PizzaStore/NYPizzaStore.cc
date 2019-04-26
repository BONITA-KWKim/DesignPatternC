#include "NYPizzaStore.hh"

Pizza* NYPizzaStore::createPizza(string item)
{
    Pizza* pizza = NULL;
    PizzaIngredientFactory* ingredientFactory = new NYPizzaIngredientFactory();
    
    if(0 == item.compare("Cheese")){
        pizza = new CheesePizza(ingredientFactory);
        pizza->setName("New York Style Cheese Pizza");
    }
    else if(0 == item.compare("Clams")){
        pizza = new ClamsPizza(ingredientFactory);
        pizza->setName("New York Style Clams Pizza");
    }
    else if(0 == item.compare("Pepperoni")){
        pizza = new PepperoniPizza(ingredientFactory);
        pizza->setName("New York Style Pepperoni Pizza");
    }
    else if(0 == item.compare("Veggie")){
        pizza = new VeggiePizza(ingredientFactory);
        pizza->setName("New York Style Veggie Pizza");
    }
    else{
        pizza = new NoPizza(ingredientFactory);
        pizza->setName("No Pizza");
    }
    return pizza;
}


/* End of the File */
