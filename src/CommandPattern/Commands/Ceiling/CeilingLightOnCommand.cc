#include "CeilingLightOnCommand.hh"

CeilingLightOnCommand::CeilingLightOnCommand(CeilingLight* ceilingLight){
    this->ceilingLight = ceilingLight;
}

void CeilingLightOnCommand::execute(){
    ceilingLight->on();
}
