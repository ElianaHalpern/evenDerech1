//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_BINARYEXPRESSION_H
#define UNTITLED_BINARYEXPRESSION_H


#include "Expression.h"

class BinaryExpression: public Expression {
protected: Expression* left;
protected: Expression* right;
public:
    BinaryExpression(Expression* le, Expression* re){
        left = le;
        right = re;
    }
    virtual double calculate() const = 0;
};


#endif //UNTITLED_BINARYEXPRESSION_H
