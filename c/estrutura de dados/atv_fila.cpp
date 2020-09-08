#include<stdio.h>

//	FIFO = First In, First Out

#define MAX 5
int final, inicio;

void enqueue(int fila[MAX], int x)
{
	if(final == MAX)
	{
		printf("\n Fila cheia");
	}
	else
	{
		if(x % 2 != 0)
		{
			fila[final] = x;
			final++;
		}
	}
}

void exibe(int fila[MAX])
{
	if(final >= 1 && inicio < final)
	{
		for(int i =0; i<final; i++)
		{
			printf("\nFila[%d] = %d", i, fila[i]);
		}
	} 
	else
	{
		printf("Fila vazia!");
	}
}

int main()
{
	inicio = 0;
	final = 0;
	int fila[MAX];
	
	enqueue(fila, 0);
	enqueue(fila, 1);
	enqueue(fila, 2);
	enqueue(fila, 3);
	enqueue(fila, 4);
	
	exibe(fila);
}
