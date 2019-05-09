#ifndef __GARAGE_DOOR_OPEN_COMMAND_HH__
#define __GARAGE_DOOR_OPEN_COMMAND_HH__

#include "Command.hh"
#include "GarageDoor.hh"

class GarageDoorOpenCommand : public Command{
public:
    GarageDoor* garageDoor;
    GarageDoorOpenCommand(GarageDoor* garageDoor);
    void execute();
};

#endif
