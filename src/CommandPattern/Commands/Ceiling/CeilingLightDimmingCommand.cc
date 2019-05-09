#include "CeilingLightDimmingCommand.hh"

CeilingLightDimmingCommand::CeilingLightDimmingCommand(CeilingLight* ceilingLight){
    this->ceilingLight = ceilingLight;
}

void CeilingLightDimmingCommand::execute(){
    ceilingLight->dim(50);
    
    printf("Set light dimming: %d", 50);
}
