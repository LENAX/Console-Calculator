#inlcude "Link list.h"

struct Node
{
    pToken lexeme;
    LPosition Next;
};

List MakeEmpty(List L)
{
    L -> lexeme = NULL;
    L -> Next = NULL;
}

int IsEmpty(List L)
{
    return L -> lexeme == NULL;
}

int IsLast(List L)
{
    return L -> Next == NULL;
}

void Insert(pToken t, List L, LPosition p)
{
    LPosition TmpCell;

    TmpCell = malloc(sizeof(struct Node));
    assert(TmpCell != NULL);

    TmpCell->lexeme = t;
    TmpCell->Next = P->Next;
    P->Next = TmpCell;
}

void DeleteList(List L)
{

}
