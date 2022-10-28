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

void enderecamento_interno_v2(long long int* tabela,long long int val, int tam, int*colisao)
{
    int id = metodo_divisao_v2(val, tam,37);
    while (tabela[id] != 0)
    {
        id = (id + 1) % tam;
        (*colisao)++;
    }
    tabela[id] = val;
}

void enderecamento_aberto_v1(long long int* tabela, long long int val, int tam, int c)
{
    long long int id = metodo_divisao_v1(val, tam);
    int tentativa = 0;
    while (tabela[id] != 0)
    {
        //printf("%d\n", tentativa);
        tentativa++;
        id += pow(tentativa,tentativa)*c;
        id = id % tam;
        
    }
    tabela[id] = val;
}

void enderecamento_aberto_v2(long long int* tabela, long long int val, int tam) 
{
    int id = metodo_divisao_v1(val, tam);
    printf(" endereco: %d\n", id);
    int ant;
    int tentativa = 1;
    while (tabela[id] != 0)
    {
        
        ant = id;

        id = (id + ant * tentativa) % tam;

        tentativa++;
    }
    tabela[id] = val;

}
void enderecamento_aberto_v3(long long int* tabela, long long int val, int tam, int* colisao)
{
    int id = metodo_divisao_v2(val, tam,37);
    int tentativa = 1;
    while (tabela[id] != 0)
    {
        id = (id + tentativa) % tam;
        tentativa++;
        (*colisao)++;
    }
    tabela[id] = val;
}