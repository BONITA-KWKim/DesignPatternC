#ifndef __LIGHT_OFF_COMMAND_HH__
#define __LIGHT_OFF_COMMAND_HH__

#include "Command.hh"
#include "Light.hh"

class LightOffCommand : public Command{
public:
    Light* light;
    LightOffCommand(Light* light);
    void execute();
};

#endif

