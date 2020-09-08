#include<stdio.h>

int main()
{
	int x = 5, fat = 1, i;
	
	for(i = x; i > 0; i--)
	{
		fat *= i;
	}
	
	printf("O fatorial de %d e igual a %d", x, fat);
	
	return 0;
	
}

