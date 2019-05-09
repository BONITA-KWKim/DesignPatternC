#ifndef __CEILING_FAN_LOW_COMMAND_HH__
#define __CEILING_FAN_LOW_COMMAND_HH__

#include "Command.hh"
#include "CeilingFan.hh"

#define CEILING_FAN_SPEED_LOW "Low"

class CeilingFanLowCommand : public Command{
public:
    CeilingFan* ceilingFan;
    CeilingFanLowCommand(CeilingFan* ceilingFan);
    void execute();
};

#endif

