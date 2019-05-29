#ifndef __TEMPALTE_METHOD_COFFEE_HH__
#define __TEMPALTE_METHOD_COFFEE_HH__

#include <cstdio>
#include "CaffeineBeverage.hh"

class Coffee : public CaffeineBeverage{
    void brew(){
        printf("brew coffee\n");
    };
    void addCondiments(){
        printf("add sugar and cream\n");
    };
};

#endif
