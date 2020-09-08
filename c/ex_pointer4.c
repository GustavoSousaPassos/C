#include<stdio.h>
#include<locale.h>

int main() // Programa que uma variavél ponteiro armazena o endereço de memoriae realizar a divisão do valor apontado sem utiliza-lo diretamente
{
	int n  = 5;
	int *pn;
	
	pn = &n;
	*pn = *pn / 5;
	
	printf("\n Valor de n = %d", *pn);
	
}
