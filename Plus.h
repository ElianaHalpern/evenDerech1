//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_PLUS_H
#define UNTITLED_PLUS_H


#include "BinaryExpression.h"

class Plus: public BinaryExpression {
public:
    Plus(Expression* le, Expression* re): BinaryExpression(le, re){

    }
    virtual double calculate()const;
};



#endif //UNTITLED_PLUS_H
