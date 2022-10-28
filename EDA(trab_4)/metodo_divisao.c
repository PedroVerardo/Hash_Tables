#include <stdio.h>

long long int metodo_divisao_v1(long long int chave, int tam)
{
	return chave % tam;
}

long long int metodo_divisao_v2(long long int chave, int tam, int c)
{
	if (mdc(c, tam) != 1)
	{
		printf("%d\n", mdc(24, 9));
		printf("nao sao primos entre si");
		exit(1);
	}
	return chave*c % tam;
}

int mdc(long long int a, long long int b)
{
	long long int resto;

	while (b != 0) 
	{
		resto = a % b;
		a = b;
		b = resto;
	}

	return a;
}