#ifndef __CEILING_FAN_HH__
#define __CEILING_FAN_HH__

#include <cstdio>
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::tolower

using namespace std;

enum Speed { high, medium, low };

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
    string getSpeed(){
        switch(speed){
            case high: return "high"; break;
            case medium: return "medium"; break;
            case low: return "low"; break;
            default: break;
        }
    };
};

#endif
