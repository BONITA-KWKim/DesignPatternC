#include "RemoteController.hh"

RemoteController::RemoteController(){
//    onCommands = new Command[BUTTON_NO];
//    offCommands = new Command[BUTTON_NO];
    Command* noCommand = new NoCommand();
    for (int i = 0; BUTTON_NO > i; ++i){
        onCommands[i] = noCommand;
        offCommands[i] = noCommand;
    }
}

void RemoteController::setCommand(int slot, Command* onCommand, Command* offCommand){
    assert(BUTTON_NO > slot && 0 <= slot);
    onCommands[slot] = onCommand;
    offCommands[slot] = offCommand;
}

void RemoteController::onButtonWasPushed(int slot){
    assert(BUTTON_NO > slot && 0 <= slot);
    onCommands[slot]->execute();
}

void RemoteController::offButtonWasPushed(int slot){
    assert(BUTTON_NO > slot && 0 <= slot);
    offCommands[slot]->execute();
}

void RemoteController::getInfo(){
    string str = "";
    str.append("\n----- Remote Controller -----\n");
    for (int i = 0; BUTTON_NO > i; ++i){
        //str.append("[slot %d]\t%s\t%s\n ", i, typeid(onCommands[i]).name(), typeid(offCommands[i]).name());
        str.append("[slot ");
        str += to_string(i);
        str.append("]\t");
        str += typeid(onCommands[i]).name();
        str.append("\t");
        str += typeid(offCommands[i]).name();
        str.append("\n");
    }
    printf("%s", str.c_str());
}
