#include "metodo_dobra.h"
#include "metodo_divisao.h"

void enderecamento_interno_v1(int* tabela, int val, int tam)
{
    int id = metodo_da_dobra(val, tam);
    while (tabela[id] != 0)
    {
        id += 1;
    }
    tabela[id] = val;
}

void enderecamento_interno_v2(int* tabela, int val, int tam)
{
    int id = metodo_divisao_v1(val, tam);
    while (tabela[id] != 0)
    {
        id += 1;
    }
    tabela[id] = val;
}