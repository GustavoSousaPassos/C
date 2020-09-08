#include<stdio.h>
#include<locale.h>
#define TAM 4

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int m[TAM][TAM], i, j;
	
	for(i=0;i<TAM;i++)
	{
		for(j=0;j<TAM;j++)
		{
			printf("m[%d][%d]", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("Números divisiceis por 5: ");
	
	for(i=0;i<TAM;i++)
	{
		for(j=0;j<TAM;j++)
		{
			if(m[i][j] % 5 == 0)
			{
				printf("\nm[%d][%d] = %d", i, j, m[i][j]);
			}
		}
	}
	
}
