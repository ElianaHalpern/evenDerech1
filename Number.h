//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_NUMBER_H
#define UNTITLED_NUMBER_H

#include "Expression.h"

class Number: public Expression {
    double value;
public:
    Number(double val){
        value = val;
    }
    virtual double calculate() const;
};



#endif //UNTITLED_NUMBER_H
