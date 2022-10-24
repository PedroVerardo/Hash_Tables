#include <math.h>

int metodo_multiplicacao_v1(int chave, int tam)
{
	int k = log2(tam);
	return (int)((pow(2, (32 - k) / 2)) / pow(chave, 2)) % (int)pow(2, k);
}

int metodo_multiplicacao_v2(int chave, int tam, int mult)
{
	int k = log2(tam);
	return (int)((pow(2, (32 - k) / 2)) / (chave*mult)) % (int)pow(2, k);
}