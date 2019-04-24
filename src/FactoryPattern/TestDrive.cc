#include "TestDrive.hh"

int main(int argc, char * argv[]){
    printf("Hello Factory Pattern.");
    
    /**/
    PizzaStore* NYBranch = new NYPizzaStore();
    
    Pizza* NYPizza = NYBranch->orderPizza("Cheese");
    
    PizzaStore* ChicagoBranch = new ChicagoPizzaStore();
    
    //Pizza* ChicagoPizza = ChicagoBranch->orderPizza("Cheese");
    
    return 0;
}

