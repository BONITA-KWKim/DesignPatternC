#ifndef __REMOTE_CONTROLLER_HH__
#define __REMOTE_CONTROLLER_HH__

#include <assert.h>
#include <string>
#include <iostream>

#include "Command.hh"
#include "NoCommand.hh"

using namespace std;

#define BUTTON_NO 7

class RemoteController{
public:
    Command* onCommands[BUTTON_NO];
    Command* offCommands[BUTTON_NO];
    Command* settingCommand;
    
    RemoteController();
    void setCommand(int slot, Command* onCommand, Command* offCommand);
    void onButtonWasPushed(int slot);
    void offButtonWasPushed(int slot);

    void setCommand(Command* settingCommand);
    void settingButtonWasPushed();
    void setSettingValue(int value);
    int getSettingValue();

    void getInfo();
private:
    int settingValue;
};

#endif
