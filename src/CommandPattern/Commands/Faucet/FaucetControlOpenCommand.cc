#include "FaucetControlOpenCommand.hh"

FaucetControlOpenCommand::FaucetControlOpenCommand(FaucetControl* faucetControl){
    this->faucetControl = faucetControl;
}

void FaucetControlOpenCommand::execute(){
    faucetControl->openValue();
}
