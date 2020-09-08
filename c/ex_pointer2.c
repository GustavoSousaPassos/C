#include<stdio.h>
#include<locale.h>

int main() 			// Programa que altera o valor de uma variavél indiretamente
{
	setlocale(LC_ALL, "Portuguese");
	
	int a, b;
	int *p, *q;
	
	a = 5;
	b = 15;
	p = &a;
	q = p;
	*q = 25;
	
	printf("Conteúdo da variavél a = %d", a);
	
}
