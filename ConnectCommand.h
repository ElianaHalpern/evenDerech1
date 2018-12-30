//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_CONNECTCOMMAND_H
#define UNTITLED_CONNECTCOMMAND_H
#include "Command.h"
#include "ClientWriter.h"


class ConnectCommand: public Command {
    queue <string> args;
public:
    ConnectCommand(queue <string> &ar) : args(ar){
        while(!ar.empty()){
            ar.pop();
        }
    }
    static void openWriter(queue<string> args);
    virtual double doCommand();
};



#endif //UNTITLED_CONNECTCOMMAND_H
