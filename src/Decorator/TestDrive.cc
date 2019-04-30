#include "TestDrive.hh"

int main(int argc, char** argv){
	printf("Decorator Pattern.\n");
    /* Espresso */
    Beverage* beverage = new Espresso();
    beverage = new Mocha(beverage);
    beverage = new Mocha(beverage);

    cout << beverage->getDescription() << " $" << beverage->cost() << endl;
    
    /* Espresso */
    Beverage* beverage1 = new HouseBlend();
    beverage1 = new Soy(beverage1);
    beverage1 = new Soy(beverage1);
    beverage1 = new Whip(beverage1);
    
    cout << beverage1->getDescription() << " $" << beverage1->cost() << endl;
    
    return 0;
}
