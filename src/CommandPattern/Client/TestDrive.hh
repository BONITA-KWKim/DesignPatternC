#ifndef __TEST_DRIVE_HH__
#define __TEST_DRIVE_HH__

#include <cstdio>

using namespace std;
/*
 * Invokers(Callers)
 */
#include "SimpleRemoteController.hh"
#include "RemoteController.hh"
/*
 * Receivers
 */
#include "Light.hh"
#include "GarageDoor.hh"
#include "ApplianceControl.hh"
#include "CeilingFan.hh"
#include "CeilingLight.hh"
#include "FaucetControl.hh"
#include "GardenLight.hh"
/*
 * Commands
 */
#include "LightOnCommand.hh"
#include "LightOffCommand.hh"
#include "GarageDoorOpenCommand.hh"
#include "GarageDoorCloseCommand.hh"
#include "ApplianceControlOnCommand.hh"
#include "ApplianceControlOffCommand.hh"
#include "CeilingFanHighCommand.hh"
#include "CeilingFanMediumCommand.hh"
#include "CeilingFanLowCommand.hh"
#include "CeilingFanInfoCommand.hh"
#include "CeilingLightOnCommand.hh"
#include "CeilingLightOffCommand.hh"
#include "FaucetControlOpenCommand.hh"
#include "FaucetControlCloseCommand.hh"
#include "GardenLightSetDuskCommand.hh"
#include "GardenLightSetDawnCommand.hh"
#include "GardenLightOnCommand.hh"
#include "GardenLightOffCommand.hh"

#endif
