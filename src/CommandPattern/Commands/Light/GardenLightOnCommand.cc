#include "GardenLightOnCommand.hh"

GardenLightOnCommand::GardenLightOnCommand(GardenLight* gardenLight){
    this->gardenLight = gardenLight;
}

void GardenLightOnCommand::execute(){
    gardenLight->manualOn();
}
