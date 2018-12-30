//
// Created by eliana on 12/27/18.
//

#include "Plus.h"

double Plus::calculate() const {
    return this->left->calculate()+this->right->calculate();
}