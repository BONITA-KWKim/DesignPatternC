#ifndef __NO_COMMAND_HH__
#define __NO_COMMAND_HH__

#include "Command.hh"

class NoCommand : public Command{
public:
    NoCommand(){};
    void execute(){};
};

#endif
