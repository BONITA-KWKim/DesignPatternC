#include "Mocha.hh"

Mocha::Mocha(Beverage* beverage){
    this->beverage = beverage;
}

string Mocha::getDescription(){
    printf("test");
    return beverage->getDescription() + ", Mocha";
}

double Mocha::cost(){
    return .20 + beverage->cost();
}
