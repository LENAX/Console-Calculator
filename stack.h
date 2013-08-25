#ifndef STACK_H
#define STACK_H
#define float ElementType;
struct Stack;
typedef struct Stack *Stk;
typedef int ElementType;

extern int IsEmpty( Stk S);
extern int IsFull( Stk S);
extern Stack CreatStack( int Elements);
extern void DisposeStack( Stk S);
extern void MakeEmpty( Stk S);
extern void Push( ElementType c, Stk S);
extern ElementType Top( Stk S);
extern void Pop( Stk S);
extern ElementType TopnPop( Stk S);
extern int PrintTop( Stk S);
extern int PrintnPop( Stk S);
extern int PrintAll( Stk S);

#endif // STACK_H
