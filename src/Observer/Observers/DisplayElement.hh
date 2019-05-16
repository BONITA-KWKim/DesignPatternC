#ifndef __DISPLAY_ELEMENT_HH__
#define __DISPLAY_ELEMENT_HH__

class DisplayElement{
public:
    DisplayElement(){};
    ~DisplayElement(){};
    virtual void display()=0;
};

#endif
