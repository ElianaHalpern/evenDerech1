//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_WHILECOMMAND_H
#define UNTITLED_WHILECOMMAND_H

#include <queue>
#include "Expression.h"
#include "Command.h"

class WhileCommand: public Command {
    queue <Expression*> args;
public:
    WhileCommand(queue <Expression*> &ar) : args(ar){
        while(!ar.empty()){
            ar.pop();
        }
    }
    virtual double doCommand();
};



#endif //UNTITLED_WHILECOMMAND_H
