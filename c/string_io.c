#include<stdio.h>
#include<string.h>

int main()
{

	// Forma convencional
	/*
	char frase[50];
	
	printf("Digite uma string: ");
	scanf("%49[^\n]", frase);
	
	printf("Nome digitado: %s",frase);
	*/
	
	// Usando a biblioteca string.h
	
	char str[40];
	
	printf("Digite seu nome: ");
	gets(str); 						// lê a string digitada
	
	printf("Nome digitado: %s", str);
	
}
