#ifndef __APPLIANCE_CONTROL_ON_COMMAND_HH__
#define __APPLIANCE_CONTROL_ON_COMMAND_HH__

#include "Command.hh"
#include "ApplianceControl.hh"

class ApplianceControlOnCommand : public Command{
public:
    ApplianceControl* applianceControl;
    ApplianceControlOnCommand(ApplianceControl* applianceControl);
    void execute();
};

#endif
