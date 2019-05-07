#ifndef __SIMPLE_REMOTE_CONTROLLER_HH__
#define __SIMPLE_REMOTE_CONTROLLER_HH__

#include "Command.hh"

class SimpleRemoteController{
public:
    Command* slot;
    SimpleRemoteController();
    void setCommand(Command* command);
    void buttonWasPressed();
};

#endif
