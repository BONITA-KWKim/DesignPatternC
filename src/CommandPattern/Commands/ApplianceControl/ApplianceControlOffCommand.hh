#ifndef __APPLIANCE_CONTROL_OFF_COMMAND_HH__
#define __APPLIANCE_CONTROL_OFF_COMMAND_HH__

#include "Command.hh"
#include "ApplianceControl.hh"

class ApplianceControlOffCommand : public Command{
public:
    ApplianceControl* applianceControl;
    ApplianceControlOffCommand(ApplianceControl* applianceControl);
    void execute();
};

#endif

