//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_ASSIGNCOMMAND_H
#define UNTITLED_ASSIGNCOMMAND_H
#include "Command.h"

extern mapsData data;

class AssignCommand: public Command {
public:
    queue <string> args;
    AssignCommand(queue <string> &ar) : args(ar){
        while(!ar.empty()){
            ar.pop();
        }
    }

    virtual double doCommand();
};



#endif //UNTITLED_ASSIGNCOMMAND_H
