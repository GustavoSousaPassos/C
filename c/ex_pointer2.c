#include<stdio.h>
#include<locale.h>

int main() 			// Programa que altera o valor de uma variav�l indiretamente
{
	setlocale(LC_ALL, "Portuguese");
	
	int a, b;
	int *p, *q;
	
	a = 5;
	b = 15;
	p = &a;
	q = p;
	*q = 25;
	
	printf("Conte�do da variav�l a = %d", a);
	
}
