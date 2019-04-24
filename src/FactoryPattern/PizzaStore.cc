#include <stdio.h>
#include <iostream>
#include <cstring>
#include "PizzaStore.hh"

PizzaStore::PizzaStore(){

}


PizzaStore::~PizzaStore(){

}


Pizza* PizzaStore::orderPizza(string type){
    Pizza* pizza;
    
    pizza = createPizza(type);
    //memcpy(pizza, createPizza(type), sizeof(pizza))
    
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    
    return pizza;
}



/* End of the File */
