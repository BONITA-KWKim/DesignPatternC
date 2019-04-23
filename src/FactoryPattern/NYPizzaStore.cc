#include "NYPizzaStore.hh"
#include "NoPizza.hh"
#include "NYCheesePizza.hh"

Pizza* NYPizzaStore::createPizza(string item)
{
    if(item.compare("Cheese")){
        return new NYCheesePizza();
    }
    return new NoPizza;
    
    /*
    if(item.compare("cheese"))
        return new NYCheesePizza();
    else if(item.compare("pepperoni"))
        return new NYPepperoniPizza();
    else if(item.compare("clam"))
        return new NYClamPizza();
    else if(item.compare("veggie"))
        return new NYVeggiePizza();
    else
        return null;
    */
}


/* End of the File */
