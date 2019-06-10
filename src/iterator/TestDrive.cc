#include "TestDrive.hh"

int main(int argc, char** argv){
    /* start */
    printf("Iterator Pattern.\n");
    
    /* create Pancake House's menu */
    printf("---------- Pancake House Menu ----------\n");
    PancakeHouseMenu* pancakeHouseMenu = new PancakeHouseMenu();
    pancakeHouseMenu->display();
    
    /* create Diner's menu*/
    printf("---------- Diner Menu ----------\n");
    DinerMenu* dinerMenu = new DinerMenu();
    dinerMenu->display();
    
    Waitress* waitress = new Waitress(pancakeHouseMenu, dinerMenu);
    waitress->printMenu();
    
    /* terminate */
    return 0;
}
