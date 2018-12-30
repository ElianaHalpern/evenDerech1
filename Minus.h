//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_MINUS_H
#define UNTITLED_MINUS_H


#include "BinaryExpression.h"

class Minus: public BinaryExpression {
public:
    Minus(Expression* le, Expression* re): BinaryExpression(le, re){
    }
    virtual double calculate()const;
};



#endif //UNTITLED_MINUS_H
