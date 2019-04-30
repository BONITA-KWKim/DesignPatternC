#include "Milk.hh"

string Milk::getDescription(){
    return CondimentDecorator::getDescription() + ", Milk";
}

double Milk::cost(){
    return .10 + beverage->cost();
}

