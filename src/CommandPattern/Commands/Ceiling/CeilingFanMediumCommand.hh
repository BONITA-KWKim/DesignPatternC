#ifndef __CEILING_FAN_MEDIUM_COMMAND_HH__
#define __CEILING_FAN_MEDIUM_COMMAND_HH__

#include "Command.hh"
#include "CeilingFan.hh"

#define CEILING_FAN_SPEED_MEDIUM "Medium"

class CeilingFanMediumCommand : public Command{
public:
    CeilingFan* ceilingFan;
    CeilingFanMediumCommand(CeilingFan* ceilingFan);
    void execute();
};

#endif

