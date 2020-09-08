#include<stdio.h>
#include<conio.h>
float num;

void entrada()
{
	printf("Digite um número: ");
	scanf("%f", &num);
}


float triplicaNum()
{
	float triplo = num * 3;
	printf("\nO seu triplo: %.2f", triplo); 
}

int verifica()
{
	int res;
	
	
	if(num >= 0)
	{
		res = 1;	
	}
	else
	{
		res = 0;
	}
	return printf("Negativo[0] ou poisitivo[1]? %d", res);
}
int main()
{
	entrada();
	verifica();
	triplicaNum();
}
