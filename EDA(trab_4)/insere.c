#include "metodo_dobra.h"
#include "metodo_divisao.h"

void enderecamento_interno_v1(long long int* tabela,long long int val, int tam)
{
    int id = metodo_da_dobra(val, tam);
    while (tabela[id] != 0)
    {
        id = (id+1) % tam;
    }
    tabela[id] = val;
}

void enderecamento_interno_v2(long long int* tabela,long long int val, int tam)
{
    int id = metodo_divisao_v1(val, tam);
    printf(" endereco: %d\n", id);
    while (tabela[id] != 0)
    {
        id = (id + 1) % tam;
    }
    tabela[id] = val;
}