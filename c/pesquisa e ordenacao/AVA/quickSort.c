#include<stdio.h>
#include<conio.h>

#define MAX 23

void quick(int v [MAX], int first, int last)
{
	int begin, center, end, pivo, aux;
	
	begin  = first;
	end = last;
	center = (begin + end) / 2;
	pivo = v[center];
	
	while(begin < end)
	{
		while(v[begin] < pivo)
			begin++;
			
		while(v[end] > pivo)
			end--;
		
		if(begin < end)
		{
			aux = v[begin];
			v[begin++] = v[end];
			v[end--] = aux;
		}
		
	}
	
	if(begin == end)
	{
		begin++;
		end--;
	}
	
	if(end > first)
		quick(v, first, end);
	if(begin < last)
		quick(v, begin, last);
}

main()
{
	int i, vetor[MAX] = {11,22,19,5,18,6,13,20,9,14,1,12,4,2,21,8,23,10,17,3,15,16,7};
	
	quick(vetor, 0, MAX-1);
	printf("\n\nVetor ordenado:\n");
	
	for(i = 0;i<MAX; i++)
		printf(" %d,", vetor[i]);
	getch();	
}
