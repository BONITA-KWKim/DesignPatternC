#ifndef __GARDEG_LIGHT_HH__
#define __GARDEG_LIGHT_HH__

#include <cstdio>
#include <assert.h>

class GardenLight{
public:
    int duskTime = 0;
    int dawnTime = 0;
    
    GardenLight(){};
    void setDuskTime(int time){
        assert(0 <= time && 24 >= time);
        this->duskTime = time;
        printf("Set dusk time: %d\n", duskTime);
    };
    void setDawnTime(int time){
        assert(0 <= time && 24 >= time);
        this->dawnTime = time;
        printf("Set dawn time: %d\n", dawnTime);
    };
    void manualOn(){
        printf("Garden light is on.\n");
    };
    void manualOff(){
        printf("Garden light is off.\n");
    };
};

#endif
