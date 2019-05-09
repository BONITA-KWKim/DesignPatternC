#ifndef __CEILING_LIGHT_DIMMING_COMMAND_HH__
#define __CEILING_LIGHT_DIMMING_COMMAND_HH__

#include "Command.hh"
#include "CeilingLight.hh"

class CeilingLightDimmingCommand : public Command{
public:
    CeilingLight* ceilingLight;
    CeilingLightDimmingCommand(CeilingLight* ceilingLight);
    void execute();
};

#endif
