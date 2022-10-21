#include <math.h>
#include <stdio.h>
#include "metodo_dobra.h"

int qtd_casas(int val)
/*devolve a casa que o numero colocado esta dezena, centena, milhar*/
{
    int i;
    int ans = val;
    for (i = 0; ans > 0; i++)
    {
        ans = ans / 10;
    }
    return i;
}


int numero_dir(int val, int redutor)
/*funcao para retornar o resto da divisão por um numero multiplo de 10*/
{
    return val % (int)pow(10, redutor);
}

int numero_esq(int val, int redutor)
/*funcao para retornar o resto da divisão por uma potencia de 10*/
{
    int i;
    int ans = val;
    int redutor_real;

    //ver quantas casas o numero tem
    for (i = 0; ans > 0; i++) 
    {
        ans = ans / 10;
    }

    //mecanismo para nao gerar erro e debugar
    if (redutor > i) 
    {
        printf("o numero nao e tao grande assim cuidado!\n");
        redutor = i;
    }

    redutor_real = i - redutor;
    return val / pow(10, redutor_real);
}

int inverte(int val, int acumulador)
/*inverte um numero recursivamente*/
{
    if (val == 0)
    {
        return acumulador;
    }
    return inverte(val / 10, acumulador * 10 + val % 10);
}

int metodo_da_dobra(int chave, int tam_esq)
/*:chave: e o atributo que sera usado na funcao hash para obter a posicao
 *:tam_esq: se o tamanho do vetor esta na casa da dzena(1), centena(2), milhar(3)
*/
{
    int dif = 0;
    int tam = qtd_casas(chave);
    int tam_dir = tam - tam_esq;

    int parte_esq = numero_esq(chave, tam_esq);
    int parte_dir = numero_dir(chave, tam_dir);

    parte_esq = inverte(parte_esq, 0);

    if (tam_dir == 0) 
    {
        if (qtd_casas(chave) > tam_esq) return numero_dir(chave, tam_esq);
    }

    if (tam_esq < tam_dir)
    {
        dif = tam_dir - tam_esq;
        chave = parte_esq * pow(10, dif) + parte_dir;
    }

    if (tam_esq == tam_dir) 
    {
        chave = parte_esq + parte_dir;
        if (qtd_casas(chave) > tam_esq) return numero_dir(chave, tam_esq);
    }

    if (tam_esq > tam_dir)
    {
        dif = tam_esq - tam_dir;
        chave = parte_dir * pow(10, dif) + parte_esq;
    } 

    return chave;
}