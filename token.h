#ifndef TOKEN_H_INCLUDED
#define TOKEN_H_INCLUDED

struct token_struct;
typedef struct token_struct *pToken;

pToken CreateToken(const char *tk, const char *tg);
void DeleteToken(pToken T);
char* PartToken(int startidx, int endidx);
char lookahead(char *position);

#endif // TOKEN_H_INCLUDED
