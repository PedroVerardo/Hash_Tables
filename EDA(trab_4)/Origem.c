#include <stdio.h>
#include "cria_e_inicializa_tabela.h"
#include "metodo_divisao.h"
#include "metodo_dobra.h"
#include "Insere.h"
#define TAM 10


void printa(long long int* vec, int tam)
{
	for (int i = 0; i < tam; i++)
	{
		printf("%lld ", vec[i]);
	}
}

void insere_chave(long long int* chaves,long long int* vec, int tam)
{

	for (int i = 0; i < tam; i++)
	{
		enderecamento_interno_v2(vec, chaves[i],tam);
	}
}

int main(void)
{
	long long int chaves[] = { 10196280737,2,46753612777,87862523563,5,6,7,8,9,10 };

	long long int* vec = variacao_interior(TAM);

	insere_chave(chaves, vec, TAM);

	printa(vec, TAM);


	//----------------------//
	long long int x = metodo_da_dobra(183453, 3);
	printf("\n%lld\n", x);


	return 0;
}