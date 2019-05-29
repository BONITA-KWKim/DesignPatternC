#ifndef __TEMPLATE_METHOD_TEA_HH__
#define __TEMPLATE_METHOD_TEA_HH__

#include <cstdio>
#include "CaffeineBeverage.hh"

class Tea : public CaffeineBeverage{
public:
    Tea(){};
    ~Tea(){};
    void brew(){
        printf("brew tea\n");
    };
    void addCondiments(){
        printf("add a lemon slice\n");
    }
};

#endif
