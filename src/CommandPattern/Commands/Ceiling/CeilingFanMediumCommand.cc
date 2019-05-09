#include "CeilingFanMediumCommand.hh"

CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan* ceilingFan){
    this->ceilingFan = ceilingFan;
}

void CeilingFanMediumCommand::execute(){
    ceilingFan->on(CEILING_FAN_SPEED_MEDIUM);
}
