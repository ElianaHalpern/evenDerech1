//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_DIV_H
#define UNTITLED_DIV_H


#include "BinaryExpression.h"

class Div: public BinaryExpression {
public:
    Div(Expression* le, Expression* re): BinaryExpression(le, re){}
    virtual double calculate() const;
};

#endif //UNTITLED_DIV_H
