#include "CeilingLightOffCommand.hh"

CeilingLightOffCommand::CeilingLightOffCommand(CeilingLight* ceilingLight){
    this->ceilingLight = ceilingLight;
}

void CeilingLightOffCommand::execute(){
    ceilingLight->off();
}
