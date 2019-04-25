#include "ChicagoPizzaStore.hh"


Pizza* ChicagoPizzaStore::createPizza(string item)
{
    if(0 == item.compare("Cheese")){
        return new ChicagoCheesePizza();
    }
    else if(0 == item.compare("Clam")){
        return new ChicagoClamPizza();
    }
    else if(0 == item.compare("Pepperoni")){
        return new ChicagoPepperoniPizza();
    }
    else if(0 == item.compare("Veggie")){
        return new ChicagoVeggiePizza();
    }
    else{
        return new NoPizza();
    }
}


/* End of the File */

