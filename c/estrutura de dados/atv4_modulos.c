#include<stdio.h>

float a, b;

void entrada()
{
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	
	printf("Digite o valor de B: ");
	scanf("%f", &b);
}

void verDivisivel()
{
	
	if((int)b % (int)a == 0)
	{
		printf("O valor de A e divisivel por B \n");
	}
	else
	{
		printf("O valor de A não e divisivel por B\n");
	}
}

float calRaiz()
{
	return b*b;
}

int main()
{
	entrada();
	verDivisivel();
	printf("A raiz quadrada de B e %.2f", calRaiz());
}
