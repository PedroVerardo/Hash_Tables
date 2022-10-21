#include <stdio.h>

int metodo_divisao_v1(int chave, int tam)
{
	return chave % tam;
}

int metodo_divisao_v2(int chave, int tam, int c)
{
	if (mdc(c, tam) != 1)
	{
		printf("%d\n", mdc(24, 9));
		printf("nao sao primos entre si");
		exit(1);
	}
	return chave*c % tam;
}

int mdc(int a, int b)
{
	int resto;

	while (b != 0) 
	{
		resto = a % b;
		a = b;
		b = resto;
	}

	return a;
}