#ifndef __CAFFEINE_BEVERAGE_HH__
#define __CAFFEINE_BEVERAGE_HH__

#include <cstdio>

class CaffeineBeverage{
public:
    CaffeineBeverage(){};
    ~CaffeineBeverage(){};
    void prepareRecipe(){
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    };
    void boilWater(){
        printf("Boiling water\n");
    };
    void pourInCup(){
        printf("Pouring beverage in a cup\n");
    };
    virtual void brew()=0;
    virtual void addCondiments()=0;
};

#endif
