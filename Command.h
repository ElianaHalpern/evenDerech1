//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_COMMAND_H
#define UNTITLED_COMMAND_H
#include <iostream>
#include <queue>
#include "Expression.h"
#include "Shunting.h"
#include <pthread.h>

using namespace std;

class Command{
public:
    virtual double doCommand() = 0;
};
#endif //UNTITLED_COMMAND_H
