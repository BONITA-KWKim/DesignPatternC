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
    
    /* terminate */
    return 0;
}
