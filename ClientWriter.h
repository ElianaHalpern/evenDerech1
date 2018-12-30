//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_CLIENTWRITER_H
#define UNTITLED_CLIENTWRITER_H


#include "Command.h"
#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>

#include <string.h>

extern mapsData data;

class ClientWriter {
public:
    queue <string> args;
    ClientWriter(queue <string> &ar) : args(ar){
        //not emptying ar here because i don't want to empty the args from connectCommand
    }
    virtual double writeToServer();
};


#endif //UNTITLED_CLIENTWRITER_H
