#include "ApplianceControlOnCommand.hh"

ApplianceControlOnCommand::ApplianceControlOnCommand(ApplianceControl* applianceControl){
    this->applianceControl = applianceControl;
}

void ApplianceControlOnCommand::execute(){
    applianceControl->on();
}
