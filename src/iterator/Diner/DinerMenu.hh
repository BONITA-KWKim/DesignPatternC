#ifndef __DINER_MENU_HH__
#define __DINER_MENU_HH__

#include <cstdio>
#include <string>

#include "MenuItem.hh"

#define MAX_ITEMS 5

using namespace std;

class DinerMenu {
public:
    DinerMenu(){
        menuItems[0] = new MenuItem("BLT for vegetarian", "Bacon for vegetarian, lettuces, tomatoes on a wheat bread", true, 2.99);
        menuItems[1] = new MenuItem("BLT", "Bacon, lettuces, tomatoes on a wheat bread", false, 2.99);
        menuItems[2] = new MenuItem("Today's soup", "Today's soup with potato salad", false, 3.29);
        menuItems[3] = new MenuItem("Hot dog", "Hot dog with sauerkraut, onions, and seasoning ", true, 3.05);
        numberOfIndex = 4;
    };
    void addItem(string name, string description, bool vegetarian, double price){
        if (0 > price){
            printf("wrong price\n");
            return;
        }
        
        if (MAX_ITEMS <= numberOfIndex){
            printf("Sorry, menu is full. Cannot add to a menu.\n");
        }
        else{
            menuItems[numberOfIndex] = new MenuItem(name, description, vegetarian, price);
        }
    };
    MenuItem* getMenuItems(){
        
    }
private:
    int numberOfIndex = 0;
    MenuItem* menuItems[MAX_ITEMS];
};

#endif
