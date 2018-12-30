//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_COMMANDEXPRESSION_H
#define UNTITLED_COMMANDEXPRESSION_H


#include "Expression.h"
#include "Command.h"
#include "ConnectCommand.h"
#include "OpenDataServerCommand.h"
#include "PrintCommand.h"
#include "SleepCommand.h"
#include "WhileCommand.h"
#include "AssignCommand.h"
#include "IfCommand.h"
#include "VarCommand.h"
#include "VarBindCommand.h"
#include "ConditionCommand.h"

class CommandExpression: public Expression {
    Command* myCom;
public:
    CommandExpression(Command* command){
        myCom = command;
    }

    virtual double calculate() const;
};


#endif //UNTITLED_COMMANDEXPRESSION_H
