#include "CeilingFanOffCommand.hh"

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan* ceilingFan){
    this->ceilingFan = ceilingFan;
}

void CeilingFanOffCommand::execute(){
    ceilingFan->off();
}
