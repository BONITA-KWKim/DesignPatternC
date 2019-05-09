#ifndef __CEILING_LIGHT_OFF_COMMAND_HH__
#define __CEILING_LIGHT_OFF_COMMAND_HH__

#include "Command.hh"
#include "CeilingLight.hh"

class CeilingLightOffCommand : public Command{
public:
    CeilingLight* ceilingLight;
    CeilingLightOffCommand(CeilingLight* ceilingLight);
    void execute();
};

#endif
