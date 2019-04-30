#ifndef __BEVERAGE_HH__
#define __BEVERAGE_HH__

#include <string>

using namespace std;

class Beverage{
public:
    virtual ~Beverage(){};
    virtual double cost()=0;
    virtual string getDescription()=0;
};

#endif



/* End of the File */
