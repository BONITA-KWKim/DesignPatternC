#ifndef __GARDEN_LIGHT_SET_DAWN_COMMAND_HH__
#define __GARDEN_LIGHT_SET_DAWN_COMMAND_HH__

#include "Command.hh"
#include "GardenLight.hh"

class GardenLightSetDawnCommand : public Command{
public:
    GardenLight* gardenLight;
    GardenLightSetDawnCommand(GardenLight* gardenLight);
    void execute();
};

#endif
