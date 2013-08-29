#include <assert.h>
#include <ctype.h>
#include "stack.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isOperator(char c);
void Calculate(char operation, Stack S);
int toDigit(char *expr, int startIdx, int endIdx);



int main(void)
{
    char expr[500] = {'\0'};
    gets(expr);
    int digit, len = strlen(expr), num_len_position = 0;
    int *num_len = malloc(len*sizeof(int));
    unsigned int i;
    struct StackRecord S = CreateStack(30);


    for(i = 0; i <= strlen(expr); i++) {
        if(isdigit(expr[i])) {
            if(i == 0)
                num_len[num_len_position]++;
            else if(i != 0 && isspace(expr[i-1]))
                num_len_position = i;
                num_len[num_len_position]++;
        } else if(isspace(expr[i])) {
            if(!isOperator(expr[i-1])) {
                digit = toDigit(expr, num_len_position, num_len_position+num_len[num_len_position]-1);
                Push(digit, S);
            }
        } else if(isOperator(expr[i])) {
            Calculate(expr[i], S);
            if(isspace(expr[i+1]))
                i++;
        } else
            break;
    }
    PrintnPop(S);
    DisposeStack(S);
    system("pause");
    return 0;
}

int isOperator(char c)
{
    switch(c) {
    case '+':
    case '-':
    case '*':
    case '/':
        return 1;
    default:
        return 0;
    }
}

int toDigit(char *expr, int startIdx, int endIdx)
{
    char t[endIdx - startIdx + 1];
    int i;

    for(i = 0; i <= endIdx - startIdx; i++) {
        t[i] = *(expr + startIdx + i);
    }
    return atoi(t);
}

void Calculate(char operation, Stack S)
{
    switch(operation) {
    case '+':
        Push(TopnPop(S)+TopnPop(S), S);
        break;
    case '-':
        int t = TopnPop(S);
        Push(TopnPop(S)-t,S);
        break;
    case '*':
        Push(TopnPop(S)*TopnPop(S), S);
        break;
    case '/':
        int t = TopnPop(S);
        assert(t != 0);
        Push(TopnPop(S)/t, S);
        break;
    }
}
