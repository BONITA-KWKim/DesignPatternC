#include "GardenLightSetDuskCommand.hh"

GardenLightSetDuskCommand::GardenLightSetDuskCommand(GardenLight* gardenLight){
    this->gardenLight = gardenLight;
}

void GardenLightSetDuskCommand::execute(){
    gardenLight->setDuskTime(10);
}
