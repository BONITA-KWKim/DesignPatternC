#ifndef __CEILING_FAN_OFF_COMMAND_HH__
#define __CEILING_FAN_OFF_COMMAND_HH__

#include "Command.hh"
#include "CeilingFan.hh"

class CeilingFanOffCommand : public Command{
public:
    CeilingFan* ceilingFan;
    CeilingFanOffCommand(CeilingFan* ceilingFan);
    void execute();
};

#endif
