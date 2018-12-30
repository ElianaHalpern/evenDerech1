//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_OPENDATASERVERCOMMAND_H
#define UNTITLED_OPENDATASERVERCOMMAND_H

#include <string>
#include "Command.h"
#include "vector"
#include "string.h"
#include "OpenDataReader.h"

using namespace std;


class OpenDataServerCommand: public Command {
    queue <string> args;
public:
    OpenDataServerCommand(queue <string> &ar) : args(ar){
        while(!ar.empty()){
            ar.pop();
        }
    }
    static void openReader(int new_socket, double readSpeed);
    virtual double doCommand();
};



#endif //UNTITLED_OPENDATASERVERCOMMAND_H
