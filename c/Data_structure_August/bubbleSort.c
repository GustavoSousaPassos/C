#include<stdio.h>
#include<stdlib.h>
						// metodo de ordenação por troca (bubbleSort)
						//	consiste em passar pelo vetor varias vezes, 
						//	ordenando um valor de cada vez.
#define TAM 5 

void bubbleSort(int vet[], int tam)
{
	int i, j, aux;
	
	for(i=1; i < tam; i++)
	{
		for(j=0; j < tam; j++)
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

main()
{
	int k, vet[TAM] = {7,9,5,8,6};
	
	bubbleSort(vet, TAM);
	for(k = 0; k < TAM; k++)
		printf(" %d,", vet[k]);
	system("pause");
}

