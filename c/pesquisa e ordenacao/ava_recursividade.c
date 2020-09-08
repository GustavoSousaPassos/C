#include<stdio.h>

fat(int x)
{
	if(x  == 0)
	{
		return 1;
	}
	else
	{
		return x * fat(x - 1);	
	}
}

int main()
{
	int x = 5;
	
	printf("O fatorial de %d é igual a %d", x, fat(x));
	
	return 0;
	
}

