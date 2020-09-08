#include<stdio.h>
#include<conio.h>

int x, y;

void entrada()
{
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	printf("Digite o valor de y: ");
	scanf("%d", &y);
}

void cal()
{
	int res = 2*(x+y);
	printf("Resultado: %d", res);
}

int compara()
{
	if(x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	entrada();
	cal();
	printf("\nO maior numero e: %d",compara());
}
