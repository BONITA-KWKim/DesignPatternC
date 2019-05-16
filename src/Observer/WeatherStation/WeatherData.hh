#ifndef __WEATHER_DATA_HH__
#define __WEATHER_DATA_HH__

#include <vector>
#include "Subject.hh"
#include "Observer.hh"

using namespace std;

class WeatherData : public Subject{
public:
    WeatherData();
    ~WeatherData();
    void registerObserver(Observer* o);
    void removeObserver(Observer* o);
    void notifyObservers();
    void measurementsChanged();
    void setMeasurements(float temperature, float humidity, float pressure);
private:
    vector<Observer*> observers;
    float temperature;
    float humidity;
    float pressure;
};

#endif
