#include "TestDrive.hh"

int main(int argc, char * argv[]){
    printf("Hello Factory Pattern.\n");
    
    /**/
    PizzaStore* NYBranch = new NYPizzaStore();
    
    Pizza* NYPizza = NYBranch->orderPizza("Cheese");
    //NYPizza = NYBranch->orderPizza("Clam");
    
    PizzaStore* ChicagoBranch = new ChicagoPizzaStore();
    
    Pizza* ChicagoPizza = ChicagoBranch->orderPizza("Cheese");
    
    return 0;
}

