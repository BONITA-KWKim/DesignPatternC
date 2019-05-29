#ifndef __TEMPALTE_METHOD_COFFEE_WITH_HOOK_HH__
#define __TEMPALTE_METHOD_COFFEE_WITH_HOOK_HH__

#include <cstdio>
#include <string>
#include "CaffeineBeverageWithHook.hh"

using namespace std;

class CoffeeWithHook : public CaffeineBeverageWithHook{
public:
    void brew(){
        printf("brew coffee\n");
    };
    void addCondiments(){
        printf("add sugar and cream\n");
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
        
        printf("Do you want to add sugar and cream?\n");
        
        /* get answer */
        fflush(stdout);
        scanf("%10s", &answer[0]);

        printf("Your answer: %s\n", answer.c_str());
        
        return answer;
    };
};

#endif

