#include <stdio.h>
#include "cria_e_inicializa_tabela.h"
#include "metodo_divisao.h"
#include "metodo_dobra.h"
#include "Insere.h"
#pragma warning(disable:4996)


void printa(long long int* vec, int tam)
{
	for (int i = 0; i < tam; i++)
	{
		printf("%lld ", vec[i]);
	}
}

void insere_chave(long long int* chaves,long long int* vec, int tam, int*colisao)
{

	for (int i = 0; i < tam; i++)
	{
		enderecamento_interno_v2(vec, chaves[i],tam, colisao);
	}
}

int main(void)
{
	FILE* cpf = fopen("cpf.txt", "r");
	int var = 0;
	int tam = 200;
	long long int *chaves = variacao_interior(tam);
	long long int* vec = variacao_interior(tam);
	int colisao = 0;

	while (var < tam)
	{
		fscanf(cpf, "%lld ", &chaves[var]);
		var++;
	}

	insere_chave(chaves, vec, tam,&colisao);

	printa(vec, 100);
	printf("\n\n\ncolisao: %d", colisao);


	return 0;
}