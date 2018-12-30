//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_SLEEPCOMMAND_H
#define UNTITLED_SLEEPCOMMAND_H

#include "Command.h"

class SleepCommand: public Command {
    queue <string> args;
public:
    SleepCommand(queue <string> &ar) : args(ar){
        while(!ar.empty()){
            ar.pop();
        }
    }
    virtual double doCommand();
};

#endif //UNTITLED_SLEEPCOMMAND_H
