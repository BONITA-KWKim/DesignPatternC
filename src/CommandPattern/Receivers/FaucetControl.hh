#ifndef __FAUCET_CONTROL_HH__
#define __FAUCET_CONTROL_HH__

#include <cstdio>
#include <string>

using namespace std;

class FaucetControl{
public:
    FaucetControl(){};
    void openValue(){
        printf("Faucet is opened.\n");
    };
    void closeValue(){
        printf("Faucet is closed.\n");
    };
};

#endif
