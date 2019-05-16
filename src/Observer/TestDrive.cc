#include "TestDrive.hh"

int main(int argc, char** argv){
    printf("----- Observer Pattern -----\n");
    
    WeatherData* weatherData = new WeatherData();
    
    CurrentConditionDisplay* currentConditionDisplay = new CurrentConditionDisplay(weatherData);
    
    weatherData->setMeasurements(80, 65, 30.4f);
    
    return 0;
}
