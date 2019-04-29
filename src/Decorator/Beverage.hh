#ifndef __BEVERAGE_HH__
#define __BEVERAGE_HH__

#include <string>

using namespace std;

class Beverage{
public:
    string description = "No description";

    string getDescription(){
        return description;
    }

    virtual double cost()=0;
};

#endif



/* End of the File */
