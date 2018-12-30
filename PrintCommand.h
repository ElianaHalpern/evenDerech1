//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_PRINTCOMMAND_H
#define UNTITLED_PRINTCOMMAND_H


#include "Command.h"
#include "mapsData.h"

extern mapsData data;

class PrintCommand: public Command {
public:
    queue <string> args;
    PrintCommand(queue <string> &ar) : args(ar){
        while(!ar.empty()){
            ar.pop();
        }
    }
    virtual double doCommand();
};



#endif //UNTITLED_PRINTCOMMAND_H
