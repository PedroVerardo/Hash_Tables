#include <math.h>

long long int metodo_multiplicacao_v1(long long int chave, int tam)
{
	long long int k = log2(tam);
	return (long long int)((pow(2, (32 - k) / 2)) / pow(chave, 2)) % (long long int)pow(2, k);
}

long long int metodo_multiplicacao_v2(long long int chave, int tam, int mult)
{
	long long int k = log2(tam);
	return (long long int)((pow(2, (32 - k) / 2)) / (chave*mult)) % (long long int)pow(2, k);
}