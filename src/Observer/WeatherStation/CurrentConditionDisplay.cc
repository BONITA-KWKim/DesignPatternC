#include "CurrentConditionDisplay.hh"

CurrentConditionDisplay::CurrentConditionDisplay(Subject* weatherData){
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void CurrentConditionDisplay::update(float temperature, float humidity, float pressure){
    this->temperature = temperature;
    this->humidity = humidity;
    display();
}

void CurrentConditionDisplay::display(){
    printf("//----- Current conditions -----//\ntemperature: %f\nhumidity: %f\n", temperature, humidity);
}
