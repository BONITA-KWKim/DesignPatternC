#include "ChocolateBoiler.hh"

ChocolateBoiler::ChocolateBoiler(){
    empty = true;
    boiled = false;
}

ChocolateBoiler* ChocolateBoiler::getInstance(){
    if (NULL == chocolateBoiler){
        chocolateBoiler = new ChocolateBoiler();
    }
    return chocolateBoiler;
}

void ChocolateBoiler::fill(){
    if (isEmpty()){
        empty = false;
        boiled = false;
    }
}

void ChocolateBoiler::drain(){
    if (!isEmpty()){
        empty = true;
    }
}

void ChocolateBoiler::boil(){
    if (!isEmpty() && !isBoiled()){
        boiled = true;
    }
}

bool ChocolateBoiler::isEmpty(){
    return empty;
}

bool ChocolateBoiler::isBoiled(){
    return boiled;
}
