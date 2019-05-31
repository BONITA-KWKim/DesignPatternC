#ifndef __MENU_ITEM_HH__
#define __MENU_ITEM_HH__

#include <string>

using namespace std;

class MenuItem {
public:
    MenuItem(string name, string description, bool vegetarian, double price){
        this->name = name;
        this->description = description;
        this->vegetarian = vegetarian;
        this->price = price;
    };
    string getName(){
        return name;
    };
    string getDescription(){
        return description;
    };
    bool isVegetarian(){
        return vegetarian;
    };
    double getPrice(){
        return price;
    };
private:
    string name;
    string description;
    bool vegetarian;
    double price;
};

#endif
