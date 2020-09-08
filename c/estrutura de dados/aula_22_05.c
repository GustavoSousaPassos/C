#include<stdio.h>

int TAM = 5;

void lerVetor(float vet[])
{	
	int i;
	
	printf("\n ***ENTRADA DOS VALORES*** \n")
	
	for(i=0;i<TAM;i++)
	{
		printf("Valor de vet[%d]: ", i);
		scanf("%f", &vet[i]);
	}
}

void imprimeVetor(float vet[])
{
	int i;
	
	printf("\n ***LISTA DE VALORES NO VETOR*** \n");
	
	for(i=0;i<TAM;i++)
	{
		printf("vet[%d] = %.2f \n", i, vet[i]);
	}
} 

float verificaVetor(float vet[])
{
	int j; 
	float maior = 0;
	for(j=0;j<TAM;j++)
	{
		if(vet[j] > maior)
		{
			maior = vet[j];
		}
	}
	
	return maior;
}

int main()
{
	float vet[TAM];
	
	lerVetor(vet);
	imprimeVetor(vet);
	printf("\nmaior valor: %.2f", verificaVetor(vet));
}
