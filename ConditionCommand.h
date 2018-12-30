//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_CONDITIONCOMMAND_H
#define UNTITLED_CONDITIONCOMMAND_H
#include "Command.h"

class ConditionCommand: public Command {
    queue<string> args;
public:
    ConditionCommand(queue<string> &ar) : args(ar){
        while(!ar.empty()){
            ar.pop();
        }
    }
    virtual double doCommand();
};


#endif //UNTITLED_CONDITIONCOMMAND_H
