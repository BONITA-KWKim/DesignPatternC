#include "TestDrive.hh"

int main(int argc, char** argv){
    printf("Singleton Pattern.\n");
    
    /* Chocolate Factory */
    ChocolateBoiler* chocolateBoiler = ChocolateBoiler::getInstance();
    
    printf("Initail status. Boiled: %d, Empty: %d\n", chocolateBoiler->isBoiled(), chocolateBoiler->isEmpty());
    
    chocolateBoiler->fill();
    printf("Status after fill. Boiled: %d, Empty: %d\n", chocolateBoiler->isBoiled(), chocolateBoiler->isEmpty());

    chocolateBoiler->boil();
    printf("Status after boil. Boiled: %d, Empty: %d\n", chocolateBoiler->isBoiled(), chocolateBoiler->isEmpty());
    
    if(true == chocolateBoiler->isBoiled()){
        chocolateBoiler->drain();
        printf("Status after drain. Boiled: %d, Empty: %d\n", chocolateBoiler->isBoiled(), chocolateBoiler->isEmpty());
    }

    printf("Last status. Boiled: %d, Empty: %d\n", chocolateBoiler->isBoiled(), chocolateBoiler->isEmpty());

    return 0;
}
