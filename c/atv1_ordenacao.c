#include<stdio.h>

int TAM = 5;

void ler(int vet[])
{
	int i, num;
	for(i=0;i<TAM;i++)
	{
		printf("vet[%d] = ", i);
		scanf("%d",&vet[i]);	
	}
}

void exibir(int vet[])
{
	int i;
	for(i = 0; i<TAM;i++)
	{
		printf("vet[%d] = %d \n", i, vet[i]);
	}
}

void ordenar(int vet[])
{
	int i,j, aux;
	
	for(i=1;i<TAM;i++)
	{
		for(j=0;j<TAM-1;j++)
		{
			if(vet[j] > vet[j+1])
			{
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}
	}
	
}

int main()
{
	int vet[TAM];
	
	ler(vet);
	printf("\nOrdem digitada:\n\n");
	exibir(vet);
	printf("\nOrdem ordenada\n\n");
	
	ordenar(vet);
	exibir(vet);
	
}
