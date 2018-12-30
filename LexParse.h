//
// Created by eliana on 12/27/18.
//

#ifndef UNTITLED_LEXPARSE_H
#define UNTITLED_LEXPARSE_H


#include <string>
#include <vector>
#include <map>
#include "string.h"
#include "fstream"
#include "CommandExpression.h"
#include <queue>
#include <iostream>

using namespace std;

extern bool shouldStop;

class LexParse {
    map<int, vector<string>> commandsMap;
    map<char, int> sign;
    vector<CommandExpression *> delCom;
    vector<CommandExpression *> delCVec;
public:

    LexParse() {

    }

    void lexer(vector<string> lines);
    void initializeSign();
    vector<string> createString(string l);
    vector<string> fromStringToExp(vector<string> str);
    vector<CommandExpression*> parser(map<int, vector<string>> commandsMap);
};


#endif //UNTITLED_LEXPARSE_H
