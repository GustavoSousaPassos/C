#include<stdio.h>
#include<locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int m[4][3], i, j, par, impar=0;
	
	for(i= 0; i< 4; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("m[%d][%d]", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	
	for(i = 0;i < 4;i++)
	{
		for(j=0;j<3;j++)
		{
			if(m[i][j] % 2 != 0)
			{
				impar += m[i][j]; 
			}
			else 
			{
				par += m[i][j];
			}
		}
	}
	printf("Soma dos números pares = %d \nSoma dos números impares = %d", par, impar);
	
}
