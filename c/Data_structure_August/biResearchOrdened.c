#include<stdio.h>
#include<conio.h>

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


int binaryResearch(int vet[], int tam, int elem)
{
	int begin, center, end, pos;
	
	pos = -1;
	begin = 0;
	end = tam - 1;
	
	while(begin <= end)
	{
		center = (int) ((begin + end) / 2);
		
		if(elem == vet[center])
		{
			pos = center;
			begin = end + 1;
		}
		else if(elem > vet[center])
			begin = center + 1;
		else
			end = center - 1;
	}
	return pos;
}

main()
{
	int k, vet[TAM] = {7,9,8,5,6};
	bubbleSort(vet, TAM);
	
	printf("Put a number that do you want to search: ");
	scanf("%d", &k);
	
	binaryResearch(vet, TAM, k) == -1? printf("The number not exists in this vetor") : printf("The number %d is in the %d position.", k, binaryResearch(vet, TAM, k));
	
}
