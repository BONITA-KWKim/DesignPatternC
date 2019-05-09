#include "FaucetControlCloseCommand.hh"

FaucetControlCloseCommand::FaucetControlCloseCommand(FaucetControl* faucetControl){
    this->faucetControl = faucetControl;
}

void FaucetControlCloseCommand::execute(){
    faucetControl->closeValue();
}
