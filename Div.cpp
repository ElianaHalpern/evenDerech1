//
// Created by eliana on 12/27/18.
//

#include "Div.h"
double Div::calculate() const{
    return this->left->calculate()/this->right->calculate();
}