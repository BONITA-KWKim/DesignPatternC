#ifndef __LIGHT_ON_COMMAND_HH__
#define __LIGHT_ON_COMMAND_HH__

#include "Command.hh"
#include "Light.hh"

class LightOnCommand : public Command{
public:
    Light* light;
    LightOnCommand(Light* light);
    ~LightOnCommand();
    void execute();
};

#endif
