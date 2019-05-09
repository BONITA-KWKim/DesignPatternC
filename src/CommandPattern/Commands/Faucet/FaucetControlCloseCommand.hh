#ifndef __FAUCET_CONTROL_CLOSE_COMMAND_HH__
#define __FAUCET_CONTROL_CLOSE_COMMAND_HH__

#include "Command.hh"
#include "FaucetControl.hh"

class FaucetControlCloseCommand : public Command{
public:
    FaucetControl* faucetControl;
    FaucetControlCloseCommand(FaucetControl* faucetControl);
    void execute();
};

#endif
