#include "ChocolateBoiler.hh"

atomic<ChocolateBoiler*> ChocolateBoiler::chocolateBoiler { nullptr };
mutex ChocolateBoiler::singletonMutex;

ChocolateBoiler::ChocolateBoiler(){
    empty = true;
    boiled = false;
}

ChocolateBoiler* ChocolateBoiler::getInstance(){
    if(nullptr == chocolateBoiler){
        lock_guard<mutex> lock(singletonMutex);
        if(nullptr == chocolateBoiler){
            chocolateBoiler = new ChocolateBoiler;
        }
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
