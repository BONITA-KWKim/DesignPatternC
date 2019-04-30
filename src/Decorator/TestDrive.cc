#include "TestDrive.hh"

int main(int argc, char** argv){
	printf("Decorator Pattern.\n");
    
    Beverage* beverage = new Espresso();
    beverage = new Mocha(beverage);
    beverage = new Mocha(beverage);

    cout << beverage->getDescription() << " $" << beverage->cost() << endl;
    
    return 0;
}
