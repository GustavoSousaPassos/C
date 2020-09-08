#include<stdio.h>
#include<locale.h>

int main() // Programa que mostra os endereços e os valores armazenados nos ponteiros
{
	setlocale(LC_ALL, "Portuguese");
	
	int x = 15;
	int *px;
	
	px = &x;
	
	printf("Endereço de memoria de x = %p \n", &x);
	printf("Conteúdo da variavél x por meio do ponteiro px = %d", *px);
	printf("\nConteúdo da variavél px = %p", px);
	printf("\nEndereço de memoria de px = %p", &px);
		
}
