#ifndef __GARDEN_LIGHT_ON_COMMAND_HH__
#define __GARDEN_LIGHT_ON_COMMAND_HH__

#include "Command.hh"
#include "GardenLight.hh"

class GardenLightOnCommand : public Command{
public:
    GardenLight* gardenLight;
    GardenLightOnCommand(GardenLight* gardenLight);
    void execute();
};

#endif

