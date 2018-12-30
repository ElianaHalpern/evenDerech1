//
// Created by eliana on 12/27/18.
//

#include "Mul.h"

double Mul::calculate() const {
    return this->left->calculate()*this->right->calculate();
}