#include "token.h"

struct token_struct
{
    char *type;
    char *str;
};


pToken CreateToken(const char *tk, const char *tg)
{
    pToken *ptk = malloc(sizeof(token_struct));

    ptk->type = tg;
    ptk->str = tk;
    return ptk;
}

void DeleteToken(pToken T)
{
    free(T);
    T = NULL;
}

char* PartToken(char arr[], int startidx, int endidx)
{
    int i;
    char *t = malloc(sizeof(char) * (endidx - startidx + 1));
    char *a = t;
    for(i = startidx; i <= endidx; i++ ){
        a = &arr[i];
        a++;
    }
    return t;
}

char lookahead(char *position)
{
    assert((position + 1) != NULL);
    return *position + 1;
}
