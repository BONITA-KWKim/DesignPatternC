#include "TestDrive.hh"

int main(int argc, char** argv){
    printf("Singleton Pattern.\n");
    
    /* Chocolate Factory */
    ChocolateBoiler* chocolateBoiler = ChocolateBoiler::getInstance();
    
    return 0;
}
