#include "TestDrive.hh"

int main(int argc, char** argv){
    /* start */
    printf("Iterator Pattern.\n");
    
    /* create Pancake House's menu */
    PancakeHouseMenu* pancakeHouseMenu = new PancakeHouseMenu();
    pancakeHouseMenu->display();
    
    /* create Diner's menu*/
    DinerMenu* dinerMenu = new DinerMenu();
    
    /* terminate */
    return 0;
}
