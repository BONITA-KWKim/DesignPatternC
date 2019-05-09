#ifndef __GARAGE_DOOR_CLOSE_COMMAND_HH__
#define __GARAGE_DOOR_CLOSE_COMMAND_HH__

#include "Command.hh"
#include "GarageDoor.hh"

class GarageDoorCloseCommand : public Command{
public:
    GarageDoor* garageDoor;
    GarageDoorCloseCommand(GarageDoor* garageDoor);
    void execute();
};

#endif

