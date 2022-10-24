#include <stdio.h>
#include "cria_e_inicializa_tabela.h"
#include "metodo_divisao.h"
#include "metodo_dobra.h"
#define TAM 10


void printa(int* vec, int tam)
{
	for (int i = 0; i < tam; i++)
	{
		printf("%d ", vec[i]);
	}
}

void insere_chave(int* chaves, int* vec, int tam)
{
	int x;

	for (int i = 0; i < tam; i++)
	{
		x = metodo_divisao_v2(chaves[i], tam, 7);

		vec[x] = chaves[i];
	}
}

int main(void)
{
	int chaves[] = { 1,2,3,4,5,6,7,8,9,10 };

	int* vec = variacao_interior(TAM);

	insere_chave(chaves, vec, TAM);

	//printa(vec, TAM);


	//----------------------
	int x = metodo_da_dobra(183453, 3);
	printf("%d\n", x);


	return 0;
}