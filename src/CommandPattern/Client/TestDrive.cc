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
    CeilingFanInfoCommand * ceilingFanInfoCommand = new CeilingFanInfoCommand(ceilingFan);

    CeilingLight* ceilingLight = new CeilingLight();
    CeilingLightOnCommand* ceilingLightOnCommand = new CeilingLightOnCommand(ceilingLight);
    CeilingLightOffCommand* ceilingLightOffCommand = new CeilingLightOffCommand(ceilingLight);
    
    FaucetControl* faucetControl = new FaucetControl();
    FaucetControlOpenCommand* faucetControlOpenCommand = new FaucetControlOpenCommand(faucetControl);
    FaucetControlCloseCommand* faucetControlCloseCommand = new FaucetControlCloseCommand(faucetControl);
    
    GardenLight* gardenLight = new GardenLight();
    GardenLightSetDuskCommand* gardenLightSetDuskCommand = new GardenLightSetDuskCommand(gardenLight);
    GardenLightSetDawnCommand* gardenLightSetDawnCommand = new GardenLightSetDawnCommand(gardenLight);
    GardenLightOnCommand* gardenLightOnCommand = new GardenLightOnCommand(gardenLight);
    GardenLightOffCommand* gardenLightOffCommand = new GardenLightOffCommand(gardenLight);

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
    remote->setCommand(0, faucetControlOpenCommand, faucetControlCloseCommand);
    remote->setCommand(1, gardenLightSetDuskCommand, gardenLightSetDawnCommand);
    remote->setCommand(2, gardenLightOnCommand, gardenLightOffCommand);
    remote->setCommand(3, ceilingFanLowCommand, ceilingFanInfoCommand);
    remote->setCommand(4, garegeDoorOpen, garegeDoorClose);
    remote->setCommand(5, applianceControlOnCommand, applianceControlOffCommand);
    remote->setCommand(6, ceilingLightOnCommand, ceilingLightOffCommand);
    // print remote controleller info
    remote->getInfo();
    // push buttons
    printf("\n----- remote controller test -----\n");
    for (int k = 0; BUTTON_NO > k; ++k){
        printf("slot %d  on: ", k);
        remote->onButtonWasPushed(k);
        printf("slot %d off: ", k);
        remote->offButtonWasPushed(k);
    }
    printf("\n");
}
