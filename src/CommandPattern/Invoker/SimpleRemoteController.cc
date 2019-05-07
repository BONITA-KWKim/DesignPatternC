#include "SimpleRemoteController.hh"

SimpleRemoteController::SimpleRemoteController(){
    
}

void SimpleRemoteController::setCommand(Command* command){
    slot = command;
}

void SimpleRemoteController::buttonWasPressed(){
    slot->execute();
}
