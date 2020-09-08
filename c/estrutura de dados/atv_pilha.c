#include<stdio.h>


int MAX = 5;
int topo;

void push(int pilha[MAX], int x)
{
	if(topo == MAX)
	{
		printf("\n Pilha cheia!");
	}
	else
	{
		if(x % 2 == 0)
		{
			pilha[topo] = x;
			topo++;
		}
	}
	
}

void exibe(int pilha[MAX])
{
	int i;
	
	if(topo >= 1)
	{
		for(i=0;i<topo;i++)
		{
			printf("\n Pilha[%d] = %d", i, pilha[i]);
		}	
	}
	else
	{
		printf("\n Pilha vazia");
	}
}

int main()
{
	topo = 0;
	int pilha[MAX];
	
	push(pilha, 0);
	push(pilha, 1);
	push(pilha, 2);
	push(pilha, 3);
	push(pilha, 4);
	
	exibe(pilha);
}
