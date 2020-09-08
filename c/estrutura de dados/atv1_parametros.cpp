#include<stdio.h>

void calcula(float p, float q, float r)
{
	printf("Resultado da operação: %.2f", p + (q * r));
}

int calculaFatorial(int x)
{
	int i, fat=1;
	
	for(i = 1; i <= x; i++)
	{
		fat *= i;		
	}
	return fat;
}

int main()
{
	float p=1, q=2, r=3;
	int x=5;
	
	calcula(p, q, r);
	printf("\nFatorial: %d", calculaFatorial(x));
}
