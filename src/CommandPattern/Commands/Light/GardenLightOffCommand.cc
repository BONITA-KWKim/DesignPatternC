#include "GardenLightOffCommand.hh"

GardenLightOffCommand::GardenLightOffCommand(GardenLight* gardenLight){
    this->gardenLight = gardenLight;
}

void GardenLightOffCommand::execute(){
    gardenLight->manualOff();
}
