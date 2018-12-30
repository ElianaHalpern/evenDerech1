//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_VARCOMMAND_H
#define UNTITLED_VARCOMMAND_H

#include "Command.h"
#include "mapsData.h"

extern mapsData data;

class VarCommand: public Command {
    queue<string> args;
public:
    VarCommand(queue<string> &ar) : args(ar) {
        while(!ar.empty()){
            ar.pop();
        }
    }

    virtual double doCommand();
};


#endif //UNTITLED_VARCOMMAND_H
