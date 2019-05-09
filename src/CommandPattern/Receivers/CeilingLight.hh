#ifndef __CEILING_LIGHT_HH__
#define __CEILING_LIGHT_HH__

#include <cstdio>
#include <string>

using namespace std;

class CeilingLight{
public:
    int dimming = 0;
    
    CeilingLight(){};
    void on(){
        dimming = 100;
        printf("CeilingLight is on\n");
    };
    void off(){
        printf("CeilingLight is off\n");
    };
    void dim(int dimming){
        this->dimming = (dimming/10)*10;
    };
};

#endif
