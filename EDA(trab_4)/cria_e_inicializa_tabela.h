#ifndef CRIA_TABELA
#define CRIA_TABELA

struct node {
    int chave;
    struct node* prox;
};
typedef struct node Node;

int* variacao_interior(const int tam);

Node** variacao_exterior(int tam);

#endif // !CRIA_TABELA
