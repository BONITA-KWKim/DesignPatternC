#include "CeilingFanHighCommand.hh"

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan* ceilingFan){
    this->ceilingFan = ceilingFan;
}

void CeilingFanHighCommand::execute(){
    ceilingFan->on(CEILING_FAN_SPEED_HIGH);
}
