#include "TestDrive.hh"

int main(int argc, char** argv){
    /* start */
    printf("Template Method Pattern.\n");
    
    /* create beverage by template */
    printf("----- Coffee -----\n");
    Coffee* coffee = new Coffee();
    coffee->prepareRecipe();
    
    printf("----- Tea -----\n");
    Tea* tea = new Tea();
    tea->prepareRecipe();
    
    /* create beverage by template(with a hook) */
    printf("----- Coffee (hook) -----\n");
    CoffeeWithHook* coffeeWithHook = new CoffeeWithHook();
    coffeeWithHook->prepareRecipe();

    printf("----- Tea (hook) -----\n");
    TeaWithHook* teaWithHook = new TeaWithHook();
    teaWithHook->prepareRecipe();

    /* terminate */
    return 0;
}
