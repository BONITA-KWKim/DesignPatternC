#ifndef __CEILING_LIGHT_ON_COMMAND_HH__
#define __CEILING_LIGHT_ON_COMMAND_HH__

#include "Command.hh"
#include "CeilingLight.hh"

class CeilingLightOnCommand : public Command{
public:
    CeilingLight* ceilingLight;
    CeilingLightOnCommand(CeilingLight* ceilingLight);
    void execute();
};

#endif
