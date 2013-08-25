#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
#define EmptyTOS -1
#define MinStackSize 5

struct Stack
{
    int Capacity;
    int TopofStack;
    ElementType *Array;
};

int IsEmpty( Stk S )
{
    if(S->TopofStack == EmptyTOS)
        return 1;
    else
        return 0;
}

int IsFull( Stk S)
{
    if(S->TopofStack == S->Capacity)
        return 1;
    else
        return 0;
}

Stack CreatStack(int MaxElements)
{
    Stack S;
    if( MaxElements < MinStackSize) {
        printf("Stack is too small!");
        return 0;
    }
    S= malloc(sizeof(struct Stack));
    if(S == NULL) {
        printf("Memory Error!");
        return 0;
    }
    S ->Array = malloc(MaxElements * sizeof(ElementType));
    assert(s != NULL);
    S -> Capacity= MaxElements;
    MakeEmpty(S);
    return S;
}

void DisposeStack( Stk S)
{
    if( S != NULL) {
        free(S -> Array);
        free(S);
        S = NULL;
    }
}

void MakeEmpty( Stk S)
{
    S -> TopofStack = EmptyTOS;
}

void Push( ElementType c, Stk S)
{
    if(IsFull(S)) {
        printf("Stack is full!");
        return;
    } else
        S->Array[++S->TopofStack] = c;
}

ElementType Top( Stk S)
{
    if(!IsEmpty(S))
        return S->Array[S->TopofStack];
    else {
        return 0;
    }
}

void Pop( Stk S)
{
    if(IsEmpty(S))
        return;
    else
        S->TopofStack--;
    return;
}

ElementType TopnPop( Stk S)
{
    if(!IsEmpty(S))
        return S->Array[ S->TopofStack-- ];
    else {
        return 0;
    }
}

int PrintTop( Stk S)
{
    if( S -> TopofStack != EmptyTOS) {
        char c = S -> Array[ S-> TopofStack];
        printf("%c", c);
        return 1;
    } else
        return 0;
}

int PrintnPop( Stk S)
{
    if( S -> TopofStack != EmptyTOS) {
        char c = S -> Array[ S-> TopofStack--];
        printf("%c", c);
        printf(" ");
        return 1;
    } else
        return 0;
}

int PrintAll( Stk S)
{
    while(1) {
        if( S -> TopofStack == EmptyTOS)
            return 0;
        else {
            char c = S -> Array[ S-> TopofStack--];
            printf("%c", c);
            printf(" ");
        }
    }
    return 1;
}
