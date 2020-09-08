#include<stdio.h>

int TAM = 15;

void lerValores(int vet[])
{
	int i;
	
	for(i=0;i<TAM;i++)
	{
		printf("vet[%d] = ", i);
		scanf("%d", &vet[i]);
	}
}

int calculaImpar(int vet[])
{
	int i, soma=0;
	
	for(i=0;i<TAM;i++)
	{
		if(vet[i] % 2 != 0)
		{
			soma += vet[i];
		}
	}
	return soma;
}

int procuraVetor(int vet[], int val)
{
	int i, indice = 0;
	
	for(i=0;i<TAM;i++)
	{
		if(vet[i] == val)
		{
			indice = i;
		}
	}
	if(indice == 0)
	{
		return -1;
	}
	else
	{
		return indice;
	}
}

int main()
{
	int vet[TAM], val;
	
	lerValores(vet);
	printf("\nSoma dos valores impares: %d\n", calculaImpar(vet));
	
	printf("\n ***PROCURANDO VALOR*** \n");
	printf("Valor: ");
	scanf("%d", &val);
	printf("Indice: %d", procuraVetor(vet, val));

}
