#ifndef __CEILING_FAN_HIGH_COMMAND_HH__
#define __CEILING_FAN_HIGH_COMMAND_HH__

#include "Command.hh"
#include "CeilingFan.hh"

#define CEILING_FAN_SPEED_HIGH "High"

class CeilingFanHighCommand : public Command{
public:
    CeilingFan* ceilingFan;
    CeilingFanHighCommand(CeilingFan* ceilingFan);
    void execute();
};

#endif
