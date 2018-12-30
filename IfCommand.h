//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_IFCOMMAND_H
#define UNTITLED_IFCOMMAND_H
#include "Command.h"

class IfCommand: public Command {
    queue <Expression*> args;
public:
    IfCommand(queue <Expression*> &ar) : args(ar){
        while(!ar.empty()){
            ar.pop();
        }
    }

    virtual double doCommand();
};
#endif //UNTITLED_IFCOMMAND_H
