#include "TestDrive.hh"

int main(int argc, char * argv[]){
    printf("Hello Command!!!\n");
    
    SimpleRemoteController* remote = new SimpleRemoteController();
    Light* light = new Light("Living room");
    LightOnCommand* lightOn = new LightOnCommand(light);
    
    remote->setCommand(lightOn);
    remote->buttonWasPressed();
}
