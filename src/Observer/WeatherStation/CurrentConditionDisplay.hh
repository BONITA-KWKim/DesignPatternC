#ifndef __CURRENT_CONDITION_DISPLAY_HH__
#define __CURRENT_CONDITION_DISPLAY_HH__

#include <cstdio>
#include "Subject.hh"
#include "DisplayElement.hh"

class CurrentConditionDisplay : public Observer, DisplayElement{
public:
    CurrentConditionDisplay(Subject* weatherData);
    void update(float temperature, float humidity, float pressure);
    void display();
private:
    float temperature;
    float humidity;
    Subject* weatherData;
};

#endif
