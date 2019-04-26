#include "Pizza.hh"

void Pizza::bake(){
    printf("Back for 25 minutes at 350\n");
}

void Pizza::cut(){
    printf("Cutting pizza\n");
}

void Pizza::box(){
    printf("Place pizza in official PizzaStore box\n");
}

void Pizza::setName(string name){
    this->name = name;
}

string Pizza::getName(){
    return name;
}



/* End of the File */
