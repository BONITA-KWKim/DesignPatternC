#include "ApplianceControlOffCommand.hh"

ApplianceControlOffCommand::ApplianceControlOffCommand(ApplianceControl* applianceControl){
    this->applianceControl = applianceControl;
}

void ApplianceControlOffCommand::execute(){
    applianceControl->off();
}

