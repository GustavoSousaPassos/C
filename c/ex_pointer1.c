#include<stdio.h>
#include<locale.h>

int main() // Programa que mostra os endere�os e os valores armazenados nos ponteiros
{
	setlocale(LC_ALL, "Portuguese");
	
	int x = 15;
	int *px;
	
	px = &x;
	
	printf("Endere�o de memoria de x = %p \n", &x);
	printf("Conte�do da variav�l x por meio do ponteiro px = %d", *px);
	printf("\nConte�do da variav�l px = %p", px);
	printf("\nEndere�o de memoria de px = %p", &px);
		
}
