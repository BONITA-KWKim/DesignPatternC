#ifndef __DINER_MENU_ITERATOR_HH__
#define __DINER_MENU_ITERATOR_HH__

#include <cstdio>
#include "Iterator.hh"
#include "MenuItem.hh"

class DinerMenuIterator : public Iterator{
public:
    DinerMenuIterator(MenuItem* item){
        this->items = item;
    };
    
    MenuItem* next(){
        printf("[TST] diner menu iterator position: %d\n", position);
        MenuItem* menuItem = (MenuItem*)&items[position++]; //???
        return menuItem;
    };
    
    bool hasNext(){
        if (position >= sizeof(items)){
            return false;
        } else {
            return true;
        }
    };
    
private:
    MenuItem* items; // ???
    int position = 0;
};

#endif
