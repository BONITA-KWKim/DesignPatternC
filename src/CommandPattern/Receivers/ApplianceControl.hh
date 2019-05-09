#ifndef __APPLIANCE_CONTROL_HH__
#define __APPLIANCE_CONTROL_HH__

#include <cstdio>
#include <string>

using namespace std;

class ApplianceControl{
public:
    ApplianceControl(){};
    void on(){
        printf("Appliance control is on\n");
    };
    void off(){
        printf("Appliance control is off\n");
    };
};

#endif
