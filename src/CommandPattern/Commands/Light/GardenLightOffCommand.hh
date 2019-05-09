#ifndef __GARDEN_LIGHT_OFF_COMMAND_HH__
#define __GARDEN_LIGHT_OFF_COMMAND_HH__

#include "Command.hh"
#include "GardenLight.hh"

class GardenLightOffCommand : public Command{
public:
    GardenLight* gardenLight;
    GardenLightOffCommand(GardenLight* gardenLight);
    void execute();
};

#endif
