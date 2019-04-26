#include "TestDrive.hh"

int main(int argc, char * argv[]){
    printf("Hello Factory Pattern.\n");
    
    PizzaStore* NYBranch = new NYPizzaStore();
    
    printf("**********\n");
    Pizza* NYPizza = NYBranch->orderPizza("Cheese");
    printf("**********\n");
    NYPizza = NYBranch->orderPizza("Clams");

    PizzaStore* ChicagoBranch = new ChicagoPizzaStore();
    
    printf("**********\n");
    Pizza* ChicagoPizza = ChicagoBranch->orderPizza("Cheese");
    printf("**********\n");
    ChicagoPizza = ChicagoBranch->orderPizza("Pepperoni");
    
    return 0;
}

