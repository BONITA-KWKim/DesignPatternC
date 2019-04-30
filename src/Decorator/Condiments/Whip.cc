#include "Whip.hh"

string Whip::getDescription(){
    return CondimentDecorator::getDescription() + ", Whip";
}

double Whip::cost(){
    return .10 + beverage->cost();
}

