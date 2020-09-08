#include<stdio.h>

int m, n ,p;

void entrada()
{
	printf("Digite o valor de m");
	scanf("%d", &m);
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	printf("Digite o valor de p: ");
	scanf("%d", &p);
	
}

int calFatorial()
{
	int i,fat=1;
	for(i=1;i<=m;i++)
	{
		fat *= i; 
	}
	return fat;
}

int calcula()
{
	return (m-n) * p;
}

int verificar()
{
	if(n % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	entrada();
	printf("O fatorial de M e %d", calFatorial());
	printf("\nResultado de (m - n) * p = %d", calcula());
	printf("\nO valor de N e impar[0] ou par[1] : %d", verificar());
}
