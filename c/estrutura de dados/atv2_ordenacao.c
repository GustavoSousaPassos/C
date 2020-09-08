#include<stdio.h>

int TAM = 4;

void lerVetor(int vet[])
{
	int i;
	printf("\nENTRADA DOS VALORES\n");
	
	for(i=0;i<TAM;i++)
	{
		printf("vet[%d] = ",i);
		scanf("%d", &vet[i]);
	}
	
}

void ordenaBubbleSort(int vet[])
{
	int i, j, aux;
	
	for(i=1;i<TAM;i++)
	{
		for(j=0;j<TAM-i;j++)
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

void exibirVetor(int vet[])
{
	int i;
	
	printf("\nEXIBIÇÃO ORDENADA\n");
	for(i=0;i<TAM;i++)
	{
		printf("vet[%d] = %d \n", i, vet[i]);
	}
}

int ordenarBinario(int vet[])
{
	int posInicial = 0, posFinal = TAM -1, posCentral, pos, val; 	
	
	
	printf("\nBUSCA DE VALORES\n");
	printf("Digite o valor procurado: ");
	scanf("%d", &val);
	
	while(posInicial <= posFinal)
	{
		posCentral = (posInicial + posFinal) / 2;
		if(val == vet[posCentral])
		{
			pos = posCentral;
			posInicial = posFinal + 1;
		}
		else if(val > vet[posCentral])
		{
			posInicial = posCentral + 1;
		}
		else
		{
			posFinal = posCentral - 1;
			
		}
	}
	
	return (pos);
}

int main()
{
	int vet[TAM], val;
	
	lerVetor(vet);
	ordenaBubbleSort(vet);
	exibirVetor(vet);

	printf("O valor foi encontrado na posição %d", ordenarBinario(vet));
}
