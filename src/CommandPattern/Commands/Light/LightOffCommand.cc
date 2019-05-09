#include "LightOffCommand.hh"

LightOffCommand::LightOffCommand(Light* light){
    this->light = light;
}

void LightOffCommand::execute(){
    light->off();
}

