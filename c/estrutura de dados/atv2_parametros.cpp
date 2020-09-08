#include<stdio.h>

void triplica(float *a)
{
	printf("Valor triplicado: %.2f", *a * 3);
}

void calcula(int *p, int opc)
{
	switch(opc)
	{
		case 1:
			printf("Resultado: %d", *p + 5);
			break;
		case 2:
			printf("Resultado: %d", *p - 2);
			break;
	}
}

int main()
{
	float a;
	int p, opc;
	
	printf("Valor de a: ");
	scanf("%f", &a);
	triplica(&a);
	
	printf("\nValor de p: ");
	scanf("%d", &p);
	printf("Digite a opção:\n[1]Somar \n[1]Subtrai\nopção: ");
	scanf("%d", &opc);
	calcula(&p, opc);
	
}
