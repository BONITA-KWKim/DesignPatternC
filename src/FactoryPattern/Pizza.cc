#include "Pizza.hh"

void Pizza::prepare(){
    printf("Preparing: %s \n", name.c_str());
    printf("Tossing dough...\n");
    printf("Adding sauce... \n");
    printf("Adding toppings: \n");
    /*
    for (vector<string>::iterator it = toppings.begin(); toppings.end() != it; ++it){
        printf("\t" + *it.c_str());
    }
    */
    for (int i = 0; toppings.size() > i; ++i){
        printf("\t%s", toppings[i].c_str());
    }
}

void Pizza::bake(){
    printf("Back for 25 minutes at 350\n");
}

void Pizza::cut(){
    printf("Cutting pizza\n");
}

void Pizza::box(){
    printf("Place pizza in official PizzaStore box\n");
}


/* End of the File */
