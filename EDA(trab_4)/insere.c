#include "metodo_dobra.h"
#include "metodo_divisao.h"
#include <stdio.h>
#include <math.h>

void enderecamento_interno_v1(long long int* tabela,long long int val, int tam)
{
    int id = metodo_da_dobra(val, tam);
    while (tabela[id] != 0)
    {
        id = (id+1) % tam;
    }
    tabela[id] = val;
}

void enderecamento_interno_v2(long long int* tabela,long long int val, int tam, int* colisao)
{
    int id = metodo_divisao_v2(val, tam,487);
    while (tabela[id] != 0)
    {
        id = (id + 1) % tam;
        (*colisao)++;
    }
    tabela[id] = val;
}

void enderecamento_aberto_v1(long long int* tabela, long long int val, int tam, int c, int* colisao)
{
    long long int id = metodo_divisao_v2(val, tam,13);
    printf(" endereco: %d\n", id);
    int tentativa = 1;
    while (tabela[id] != 0)
    {
        id +=id + pow(tentativa,tentativa)*c;
        id = id % tam;
        tentativa++;
        (*colisao)++;
    }
    tabela[id] = val;
}

void enderecamento_aberto_v2(long long int* tabela, long long int val, int tam, int* colisao) 
{
    int id = metodo_divisao_v2(val, tam,647);
    printf(" endereco: %d\n", id);
    int ant = 1;
    int tentativa = 1;
    while (tabela[id] != 0)
    {
        id += (id + ant * tentativa) % tam;

        ant = id;

        tentativa++;
        (*colisao)++;
    }
    tabela[id] = val;

}
void enderecamento_aberto_v3(long long int* tabela, long long int val, int tam, int* colisao)
{
    //211 -> 3354
    int id = metodo_divisao_v2(val, tam, 211);
    printf(" endereco: %d\n", id);
    int tentativa = 1;
    while (tabela[id] != 0)
    {
        id += (id + tentativa) % tam;
        tentativa++;
        (*colisao)++;
        if (id >= 1023) id = id % 1023;
    }
    
    tabela[id] = val;
}