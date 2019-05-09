#ifndef __CEILING_FAN_INFO_COMMAND_HH__
#define __CEILING_FAN_INFO_COMMAND_HH__

#include "Command.hh"
#include "CeilingFan.hh"

class CeilingFanInfoCommand : public Command{
public:
    CeilingFan* ceilingFan;
    CeilingFanInfoCommand(CeilingFan* ceilingFan);
    void execute();
};

#endif
