#include <stdlib.h>
#include "cria_e_inicializa_tabela.h"


long long int* variacao_interior(const int TAM)
{
   long long int* tabela = (long long int*)malloc(sizeof(long long int) * TAM);

    for (int i = 0; i < TAM; i++)
    {
        tabela[i] = 0;
    }

    return tabela;
}

Node** variacao_exterior(int TAM)
{
    Node** tabela = (Node**)malloc(sizeof(Node*) * TAM);

    for (int i = 0; i < TAM; i++)
    {
        tabela[i]->prox = NULL;
        tabela[i]->chave = 0;
    }

    return tabela;
}