#ifndef STACK_H
#define STACK_H
#define ElementType int

struct StackRecord;
typedef struct StackRecord *Stack;


int IsEmpty(Stack S);
int IsFull(Stack S);
Stack CreateStack(int MaxElements);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(ElementType X, Stack S);
ElementType Top(Stack S);
void Pop(Stack S);
ElementType TopnPop(Stack S);
int PrintTop(Stack S);
int PrintnPop(Stack S);
int PrintAll(Stack S);

#endif // STACK_H
