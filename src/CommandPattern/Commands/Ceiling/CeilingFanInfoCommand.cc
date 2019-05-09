#include "CeilingFanInfoCommand.hh"

CeilingFanInfoCommand::CeilingFanInfoCommand(CeilingFan* ceilingFan){
    this->ceilingFan = ceilingFan;
}

void CeilingFanInfoCommand::execute(){
    ceilingFan->getSpeed();
}
