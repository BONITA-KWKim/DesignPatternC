#include "TestDrive.hh"

int main(int argc, char * argv[]){
    printf("Hello Factory Pattern.");
    
    /**/
    PizzaStore* NYbranch = new NYPizzaStore();
    
    Pizza* pizza = NYbranch->orderPizza("Cheese");
    
    return 0;
}

