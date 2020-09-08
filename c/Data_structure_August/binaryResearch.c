#include<stdio.h>
#include<stdlib.h>
								// Pesquisa binaria: no caso da lista já ordenada, consiste em comparar o valor procurado pelo valor 
								// central, afim de saber se o vetor está na parte superior(valores maiores que o centro), ou na
								// inferior(com valores menores do que o centro). Repete-se isso(pegando a parte e a dividindo 
								// determinado um novo centro) até encontrar o número procurado. Caso não encontre, a função 
								// retornará -1 (indicando que o valor está fora do vetor, ou seja, não existe).
#define TAM 5

int binaryResearch(int vet[], int tam, int elem)
{
	int begin, end, center, pos;
	
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
			end = center  - 1;
	}
	
	return pos;
} 

main()
{
	int num, vet[TAM] = {0,1,2,3,4};
	
	printf("What's number do you to search? \nnumber: ");
	scanf("%d", &num);
	binaryResearch(vet, TAM, num) == -1? printf("The number not exists in this vetor") : printf("The number %d is in the %d position.", num, binaryResearch(vet, TAM, num));
}
