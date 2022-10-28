#ifndef CRIA_TABELA
#define CRIA_TABELA

struct node {
   long long int chave;
    struct node* prox;
};
typedef struct node Node;

long long int* variacao_interior(const int tam);

Node** variacao_exterior(int tam);

#endif // !CRIA_TABELA
