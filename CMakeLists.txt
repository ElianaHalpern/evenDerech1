cmake_minimum_required(VERSION 3.13)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp AssignCommand.cpp AssignCommand.h BinaryExpression.cpp BinaryExpression.h BindCommand.cpp BindCommand.h ClientWriter.cpp ClientWriter.h Command.h CommandExpression.cpp CommandExpression.h ConditionCommand.cpp ConditionCommand.h ConnectCommand.cpp ConnectCommand.h Div.cpp Div.h Expression.h IfCommand.cpp IfCommand.h LexParse.cpp LexParse.h Minus.cpp Minus.h Mul.cpp Mul.h Number.cpp Number.h OpenDataServerCommand.cpp OpenDataServerCommand.h Plus.cpp Plus.h PrintCommand.cpp PrintCommand.h Shunting.cpp Shunting.h SleepCommand.cpp SleepCommand.h VarBindCommand.cpp VarBindCommand.h VarCommand.cpp VarCommand.h WhileCommand.cpp WhileCommand.h mapsData.cpp mapsData.h OpenDataReader.cpp OpenDataReader.h)