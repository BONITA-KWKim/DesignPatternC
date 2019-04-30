#include "Soy.hh"

string Soy::getDescription(){
    return CondimentDecorator::getDescription() + ", Soy";
}

double Soy::cost(){
    return .15 + beverage->cost();
}

