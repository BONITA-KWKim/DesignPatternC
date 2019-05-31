#ifndef __PANCAKE_HOUSE_MENU_HH__
#define __PANCAKE_HOUSE_MENU_HH__

#include <cstdio>
#include <iostream>
#include <vector>

#include "MenuItem.hh"

using namespace std;

class PancakeHouseMenu {
public:
    PancakeHouseMenu(){
        menuItems.push_back(new MenuItem("K&B pancake set", "Pancake with scrambled eggs and toast", true, 2.99));
        menuItems.push_back(new MenuItem("Regular pancake set", "Pancake with fried eggs and sausage", false, 2.99));
        menuItems.push_back(new MenuItem("Blueberry pancake", "Pancake with fresh blueberries and blueberry syrup", true, 3.49));
        menuItems.push_back(new MenuItem("Waffle", "Waffle. Able to add blueberry or strawberry", true, 3.59));
    };
    ~PancakeHouseMenu(){
        menuItems.clear();
    };
    void addItem(string name, string description, bool vegetarian, double price){
        if (0 > price){
            printf("wrong price\n");
            return;
        }
        menuItems.push_back(new MenuItem(name, description, vegetarian, price));
    };
    void display(){
        for (vector<MenuItem*>::const_iterator i = menuItems.begin(); i != menuItems.end(); ++i){
            cout << (*i)->getName() << '\t' << (*i)->isVegetarian() << '\t' << (*i)->getPrice() << endl;
            cout << (*i)->getDescription() << endl;
        }
    };
private:
    vector<MenuItem*> menuItems;
};

#endif
