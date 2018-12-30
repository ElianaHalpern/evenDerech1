//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_MUL_H
#define UNTITLED_MUL_H
#include "BinaryExpression.h"

class Mul: public BinaryExpression {
public:
    Mul(Expression* le, Expression* re): BinaryExpression(le, re){}
    virtual double calculate() const;
};



#endif //UNTITLED_MUL_H
