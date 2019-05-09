#include "GarageDoorCloseCommand.hh"

GarageDoorCloseCommand::GarageDoorCloseCommand(GarageDoor* garageDoor){
    this->garageDoor = garageDoor;
}

void GarageDoorCloseCommand::execute(){
    garageDoor->close();
}

