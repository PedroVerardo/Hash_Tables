#include <stdlib.h>
#include "cria_e_inicializa_tabela.h"


int* variacao_interior(const int TAM)
{
    int* tabela = (int*)malloc(sizeof(int) * TAM);

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