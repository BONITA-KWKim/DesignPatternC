#ifndef __LIGHT_HH__
#define __LIGHT_HH__

#include <cstdio>
#include <string>

using namespace std;

class Light{
public:
    string location;
    
    Light(string location){
        this->location = location;
    };
    
    void on(){
        printf("Light is ON.\n");
    };

    void off(){
        printf("Light is OFF.\n");
    };
    
    string getLocation(){
        return this->location;
    };
};

#endif
