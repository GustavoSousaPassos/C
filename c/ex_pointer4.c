#include<stdio.h>
#include<locale.h>

int main() // Programa que uma variav�l ponteiro armazena o endere�o de memoriae realizar a divis�o do valor apontado sem utiliza-lo diretamente
{
	int n  = 5;
	int *pn;
	
	pn = &n;
	*pn = *pn / 5;
	
	printf("\n Valor de n = %d", *pn);
	
}
