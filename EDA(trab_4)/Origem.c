#include <stdio.h>
#include "cria_e_inicializa_tabela.h"
#include "metodo_divisao.h"
#include "metodo_dobra.h"
#include "Insere.h"
#define VEC_TAM 1023
#pragma warning(disable:4996)


void printa(long long int* vec, int tam)
{
	for (int i = 0; i < tam; i++)
	{
		printf("%lld ", vec[i]);
	}
}

void insere_chave(long long int* chaves,long long int* vec, int vec_tam, int tam, int*colisao)
{

	for (int i = 0; i < tam; i++)
	{
		enderecamento_aberto_v3(vec, chaves[i],tam, colisao);
	}
}

int main(void)
{
	FILE* cpf = fopen("cpf.txt", "r");
	int var = 0;
	int tam = 900;
	long long int *chaves = variacao_interior(tam);
	long long int* vec = variacao_interior(VEC_TAM);
	int colisao = 0;

	while (var < tam)
	{
		fscanf(cpf, "%lld ", &chaves[var]);
		var++;
	}

	insere_chave(chaves, vec, VEC_TAM, tam,&colisao);


	printf("oi");
	printa(vec, tam);
	printf("\n\n\n %d pos -> colisao: %d",tam, colisao);


	return 0;
}