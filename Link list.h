#ifndef LINK_LIST_H_INCLUDED
#define LINK_LIST_H_INCLUDED

struct Node;
typedef struct Node *PtoNode;
typedef PtoNode List;
typedef PtoNode LPosition;

List MakeEmpty(List L);
int IsEmpty(List L);
int IsLast(List L);
void Insert(token_struct t, List L, LPosition p);
void DeleteList(List L);

#endif // LINK_LIST_H_INCLUDED
