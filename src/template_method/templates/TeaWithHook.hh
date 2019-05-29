#ifndef __TEMPALTE_METHOD_TEA_WITH_HOOK_HH__
#define __TEMPALTE_METHOD_TEA_WITH_HOOK_HH__

#include <cstdio>
#include <string>
#include "CaffeineBeverageWithHook.hh"

using namespace std;

class TeaWithHook : public CaffeineBeverageWithHook{
public:
    void brew(){
        printf("brew tea\n");
    };
    void addCondiments(){
        printf("add a slice lemon\n");
    };
    bool customerWantsCondiments(){
        string answer = getUserInput();
        
        if (0 == strcmp(answer.c_str(), "yes")){
            return true;
        }
        else if(0 == strcmp(answer.c_str(), "no")){
            return false;
        }
        else
            return false;
    };
    string getUserInput(){
        string answer = "";
        
        printf("Do you want to add a lemon slice?\n");
        
        /* get answer */
        fflush(stdout);
        scanf("%10s", &answer[0]);
        
        printf("Your answer: %s\n", answer.c_str());
        
        return answer;
    };
};

#endif


