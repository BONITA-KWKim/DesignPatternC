#ifndef __CAFFEINE_BEVERAGE_WITH_HOOK_HH__
#define __CAFFEINE_BEVERAGE_WITH_HOOK_HH__

#include <cstdio>

class CaffeineBeverageWithHook{
public:
    CaffeineBeverageWithHook(){};
    ~CaffeineBeverageWithHook(){};
    void prepareRecipe(){
        boilWater();
        brew();
        pourInCup();
        if (customerWantsCondiments()){
            addCondiments();
        }
    };
    void boilWater(){
        printf("Boiling water\n");
    };
    void pourInCup(){
        printf("Pouring beverage in a cup\n");
    };
    virtual bool customerWantsCondiments(){
        return true;
    };
    virtual void brew()=0;
    virtual void addCondiments()=0;
};

#endif
