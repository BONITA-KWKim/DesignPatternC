#include "WeatherData.hh"

WeatherData::WeatherData(){

}

WeatherData::~WeatherData(){
    
}

void WeatherData::registerObserver(Observer* o){
    observers.push_back(o);
}

void WeatherData::removeObserver(Observer* o){
    vector<Observer*>::iterator it;
    
    it = find(observers.begin(), observers.end(), o);
    if (observers.end() != it){
        observers.erase(it);
    }
    else{
        printf("[WAR] The observer is not found");
    }
    
}

void WeatherData::notifyObservers(){
    for (int n = 0; observers.size() > n; ++n){
        observers.at(n)->update(temperature, humidity, pressure);;
    }
}

void WeatherData::measurementsChanged(){
    notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure){
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementsChanged();
}
