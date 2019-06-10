#ifndef __WAITRESS_HH__
#define __WAITRESS_HH__

#include <cstdio>
#include "PancakeHouseMenu.hh"
#include "DinerMenu.hh"
#include "Iterator.hh"

class Waitress {
public:
    Waitress(PancakeHouseMenu* pancakeHouseMenu, DinerMenu* dinerMenu){
        this->pancakeHouseMenu = pancakeHouseMenu;
        this->dinerMenu = dinerMenu;
    };
    ~Waitress(){
        free(pancakeHouseMenu);
        free(dinerMenu);
    };
    
    void printMenu(){
        Iterator* dinerIterator = dinerMenu->createIterator();
        
        printf("Dinner menu\n");
        printMenu(dinerIterator);
    };
    
    void printMenu(Iterator* iterator){
        while (iterator->hasNext()) {
            MenuItem* menuItem = (MenuItem*)iterator->next();
            printf("name: %s", menuItem->getName().c_str());
        }
    };
    
private:
    PancakeHouseMenu* pancakeHouseMenu;
    DinerMenu* dinerMenu;
};

#endif
