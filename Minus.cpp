//
// Created by eliana on 12/27/18.
//

#include "Minus.h"

double Minus:: calculate()const{
    return this->left->calculate()-this->right->calculate();
}