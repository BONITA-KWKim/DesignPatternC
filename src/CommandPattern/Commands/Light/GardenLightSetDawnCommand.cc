#include "GardenLightSetDawnCommand.hh"

GardenLightSetDawnCommand::GardenLightSetDawnCommand(GardenLight* gardenLight){
    this->gardenLight = gardenLight;
}

void GardenLightSetDawnCommand::execute(){
    gardenLight->setDawnTime(10);
}
