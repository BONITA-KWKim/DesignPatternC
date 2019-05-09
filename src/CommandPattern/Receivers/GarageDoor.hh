#ifndef __GARAGE_DOOR_HH__
#define __GARAGE_DOOR_HH__

#include <cstdio>
#include <string>

using namespace std;

class GarageDoor{
public:
    GarageDoor(){};
    
    void open(){
        printf("Garage door is opened.\n");
    };

    void close(){
        printf("Garage door is closed.\n");
    };
};

#endif
