#include "Mocha.hh"

string Mocha::getDescription(){
    return CondimentDecorator::getDescription() + ", Mocha";
}

double Mocha::cost(){
    return .20 + beverage->cost();
}
