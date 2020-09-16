#include<stdio.h>

#define WEIGHT 12

void quickSort(int vet[WEIGHT], int first, int last)
{
	int begin, center, end, pivo, aux;
	
	begin = first;
	end = last;
	center = ((begin + end) / 2);
	pivo = vet[center];
	
	while(begin < end)
	{
		while(vet[begin] < pivo) 
			begin++;
		while(vet[end] > pivo)
			end--;
		
		if(begin < end)
		{
			aux = vet[begin];
			vet[begin++] = vet[end];
			vet[end--] = aux;
		}
	}
	
	if(begin == end)
	{
		begin++;
		end--;
	}
	if(end > first)
		quickSort(vet, first, end);
	if(begin < last)
		quickSort(vet, begin, last);
}

int binaryResearch(int vet[], int tam, int elem)
{
	int begin, center, end, pos;
	
	pos = -1;
	begin = 0;
	end = tam -1;
	
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
	int k, vet[WEIGHT] = {5,4,11,9,8,6,10,7,1,2,3,12}, l;
	quickSort(vet, 0, WEIGHT-1);
	
	printf("Put a number that do you want: ");
	scanf("%d", &k);
	binaryResearch(vet, WEIGHT, k) == -1? printf("The number not exists in the list") : printf("The number is in %d position", binaryResearch(vet, WEIGHT, k));
	
}
