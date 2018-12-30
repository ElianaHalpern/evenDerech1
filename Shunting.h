//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_SHUNTING_H
#define UNTITLED_SHUNTING_H

#include <map>
#include <stack>
#include "Plus.h"
#include "Minus.h"
#include "Mul.h"
#include "Div.h"
#include "Number.h"
#include "mapsData.h"

using namespace std;

extern mapsData data;

class Shunting {
    map<char, int> precedence;
    stack <Expression*> retValues;
public:
    Shunting(){
        precedence.insert(pair<char, int>('+', 1));
        precedence.insert(pair<char, int>('-', 1));
        precedence.insert(pair<char, int>('*', 2));
        precedence.insert(pair<char, int>('/', 2));
    }
    int getPrec(char c) const;
    Expression* applyOp(Expression* a, Expression* b, char op);
    Expression* evaluate(string tokens);
    string getStr();
    string fixString(string exp);
};


#endif //UNTITLED_SHUNTING_H
