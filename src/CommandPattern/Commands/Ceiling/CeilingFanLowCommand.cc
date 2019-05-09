#include "CeilingFanLowCommand.hh"

CeilingFanLowCommand::CeilingFanLowCommand(CeilingFan* ceilingFan){
    this->ceilingFan = ceilingFan;
}

void CeilingFanLowCommand::execute(){
    ceilingFan->on(CEILING_FAN_SPEED_LOW);
}
