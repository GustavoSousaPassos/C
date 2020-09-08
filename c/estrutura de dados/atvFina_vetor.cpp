#include<stdio.h>


int main()
{
	int num, i,j;
	int a[11];
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for(i = 0; i <= 11; i++)
	{
		a[i] = num * i;
	}	
	for(j = 0; j < 11; j++)
	{
		printf("A[%d] = %d\n", j, a[j]);
	}

}
