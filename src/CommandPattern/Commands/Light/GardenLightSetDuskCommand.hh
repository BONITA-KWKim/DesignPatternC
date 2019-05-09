#ifndef __GARDEN_LIGHT_SET_DUSK_COMMAND_HH__
#define __GARDEN_LIGHT_SET_DUSK_COMMAND_HH__

#include "Command.hh"
#include "GardenLight.hh"

class GardenLightSetDuskCommand : public Command{
public:
    GardenLight* gardenLight;
    GardenLightSetDuskCommand(GardenLight* gardenLight);
    void execute();
};

#endif
