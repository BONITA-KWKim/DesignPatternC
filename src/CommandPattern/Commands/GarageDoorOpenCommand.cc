#include "GarageDoorOpenCommand.hh"

GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor* garageDoor){
    this->garageDoor = garageDoor;
}

void GarageDoorOpenCommand::execute(){
    garageDoor->open();
}
