#ifndef __FAUCET_CONTROL_OPEN_COMMAND_HH__
#define __FAUCET_CONTROL_OPEN_COMMAND_HH__

#include "Command.hh"
#include "FaucetControl.hh"

class FaucetControlOpenCommand : public Command{
public:
    FaucetControl* faucetControl;
    FaucetControlOpenCommand(FaucetControl* faucetControl);
    void execute();
};

#endif
