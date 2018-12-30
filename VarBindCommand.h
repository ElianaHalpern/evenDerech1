//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_VARBINDCOMMAND_H
#define UNTITLED_VARBINDCOMMAND_H


#include "Command.h"

extern mapsData data;

class VarBindCommand: public Command {
    queue<string> args;
public:
    VarBindCommand(queue<string> &ar) : args(ar){
        while(!ar.empty()){
            ar.pop();
        }
    }

    virtual double doCommand();
};


#endif //UNTITLED_VARBINDCOMMAND_H
