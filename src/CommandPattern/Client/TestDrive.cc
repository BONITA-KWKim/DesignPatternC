#include "TestDrive.hh"

int main(int argc, char * argv[]){
    printf("Hello Command!!!\n");
    /*
     * create commands
     */
    Light* livingRoomLight = new Light("Living room");
    LightOnCommand* livingRoomLightOn = new LightOnCommand(livingRoomLight);
    LightOffCommand* livingRoomLightOff = new LightOffCommand(livingRoomLight);
    
    Light* badRoomLight = new Light("Bad room");
    LightOnCommand* badRoomLightOn = new LightOnCommand(badRoomLight);
    LightOffCommand* badRoomLightOff = new LightOffCommand(badRoomLight);

    GarageDoor* garageDoor = new GarageDoor();
    GarageDoorOpenCommand* garegeDoorOpen = new GarageDoorOpenCommand(garageDoor);
    GarageDoorCloseCommand* garegeDoorClose = new GarageDoorCloseCommand(garageDoor);
    
    ApplianceControl* applianceControl = new ApplianceControl();
    ApplianceControlOnCommand* applianceControlOnCommand = new ApplianceControlOnCommand(applianceControl);
    ApplianceControlOffCommand* applianceControlOffCommand = new ApplianceControlOffCommand(applianceControl);

    CeilingFan* ceilingFan = new CeilingFan();
    CeilingFanHighCommand * ceilingFanHighCommand = new CeilingFanHighCommand(ceilingFan);
    CeilingFanMediumCommand * ceilingFanMediumCommand = new CeilingFanMediumCommand(ceilingFan);
    CeilingFanLowCommand * ceilingFanLowCommand = new CeilingFanLowCommand(ceilingFan);

    /*
     * simple remote controller
     */
    SimpleRemoteController* simpleRemote = new SimpleRemoteController();

    simpleRemote->setCommand(livingRoomLightOn);
    simpleRemote->buttonWasPressed();
    
    simpleRemote->setCommand(livingRoomLightOff);
    simpleRemote->buttonWasPressed();

    simpleRemote->setCommand(garegeDoorOpen);
    simpleRemote->buttonWasPressed();

    simpleRemote->setCommand(garegeDoorClose);
    simpleRemote->buttonWasPressed();
    
    /*
     * remote controller
     */
    RemoteController* remote = new RemoteController();
    // set commands on remote controller
    remote->setCommand(0, livingRoomLightOn, livingRoomLightOff);
    remote->setCommand(1, badRoomLightOn, badRoomLightOff);
    remote->setCommand(2, ceilingFanMediumCommand, ceilingFanLowCommand);
    remote->setCommand(5, garegeDoorOpen, garegeDoorClose);
    remote->setCommand(6, applianceControlOnCommand, applianceControlOffCommand);
    // print remote controleller info
    remote->getInfo();
    // push buttons
    for (int k = 0; BUTTON_NO > k; ++k){
        remote->onButtonWasPushed(k);
        remote->offButtonWasPushed(k);
    }
}
