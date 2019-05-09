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
        printf("Light in %s is ON.\n", location.c_str());
    };

    void off(){
        printf("Light in %s is OFF.\n", location.c_str());
    };
    
    string getLocation(){
        return this->location;
    };
};

#endif
