#ifndef __SUBJECT_HH__
#define __SUBJECT_HH__

#include "Observer.hh"

class Subject{
public:
    virtual void registerObserver(Observer* o)=0;
    virtual void removeObserver(Observer* o)=0;
    virtual void notifyObservers()=0;
};

#endif
