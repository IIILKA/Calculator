#pragma once

#include <iostream>
#include <math.h>

using namespace std;

char* getExpression(char* arr);
char* getExpression2(char* expression);
struct stack;
struct finishStack;
void createStack(stack** top, char data);
void createStack(stack** top, char data);
void deleteKeyOfStack(stack** top, char data);
void deleteOneKeyOfStack(finishStack** top, double data);
void checkStack(stack** top, char* arr, int& j, bool end);
char* translateInReversePolishNotation(char* expression);
double translateOutReversePolishNotation(char* reversePolishNotation);