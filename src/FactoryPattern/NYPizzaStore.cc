#include "NYPizzaStore.hh"


Pizza* NYPizzaStore::createPizza(string item)
{
    if(0 == item.compare("Cheese")){
        return new NYCheesePizza();
    }
    else if(0 == item.compare("Clam")){
        return new NYClamPizza();
    }
    else if(0 == item.compare("Pepperoni")){
        return new NYPepperoniPizza();
    }
    else if(0 == item.compare("Veggie")){
        return new NYVeggiePizza();
    }
    //return new NoPizza();
}


/* End of the File */
