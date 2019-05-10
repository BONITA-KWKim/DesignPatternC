#ifndef __CHOCOLATE_BOILER_HH__
#define __CHOCOLATE_BOILER_HH__

#include <cstdio>
#include <stddef.h>

using namespace std;

class ChocolateBoiler{
public:
    static ChocolateBoiler* getInstance();
    void fill();
    void drain();
    void boil();
    bool isEmpty();
    bool isBoiled();
    
private:
    bool empty;
    bool boiled;
    
    static ChocolateBoiler* chocolateBoiler;

    ChocolateBoiler();
};

#endif
