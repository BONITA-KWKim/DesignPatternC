#ifndef __ITERATOR_HH__
#define __ITERATOR_HH__

#include "MenuItem.hh"

class Iterator{
public:
    virtual bool hasNext()=0;
    virtual MenuItem* next()=0;
};

#endif
