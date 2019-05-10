#ifndef __CHOCOLATE_BOILER_HH__
#define __CHOCOLATE_BOILER_HH__

#include <cstdio>

using namespace std;

class ChocolateBoiler{
public:
    ChocolateBoiler* getInstance();
    void fill();
    void drain();
    void boil();
    bool isEmpty();
    bool isBoiled();
    
private:
    bool empty;
    bool boiled;
    
    ChocolateBoiler* chocolateBoiler;

    ChocolateBoiler();
};

#endif
