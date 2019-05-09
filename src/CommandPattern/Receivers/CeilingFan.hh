#ifndef __CEILING_FAN_HH__
#define __CEILING_FAN_HH__

#include <cstdio>
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::tolower

using namespace std;

enum Speed { high, medium, low, stop };

class CeilingFan{
public:
    Speed speed;
    
    CeilingFan(){};
    void on(string speed){
        string str = "";
        locale loc;
        for (string::size_type i = 0; speed.length() > i; ++i)
            str += tolower(speed[i],loc);
        
        if(0 == str.compare("high")){
            speed = high;
            printf("Ceiling fan is on high speed.\n");
        }
        else if(0 == str.compare("medium")){
            speed = medium;
            printf("Ceiling fan is on medium speed.\n");
        }
        else if(0 == str.compare("low")){
            speed = low;
            printf("Ceiling fan is on low speed.\n");
        }
    };
    void off(){
        speed = stop;
        printf("Ceiling fan is off.\n");
    }
    void getSpeed(){
        switch(speed){
            case high: printf("[INF]Ceiling fan is on high speed.\n"); break;
            case medium: printf("[INF]Ceiling fan is on medium speed.\n"); break;
            case low: printf("[INF]Ceiling fan is on low speed.\n"); break;
            case stop: printf("[INF]Ceiling fan is off.\n"); break;
            default: break;
        }
    };
};

#endif
