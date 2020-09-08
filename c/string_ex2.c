#include<stdio.h>
#include<string.h>
#include<locale.h>

int main()
{
	// fazendo um palidromo
	
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[20], palavra_invertida[20];
	int i, j = 0, tam;
	
	printf("Digite uma string: ");
	gets(palavra);
	tam = strlen(palavra);
	
	for(i = tam-1;i >= 0; i--)
	{
		palavra_invertida[j] = palavra[i]; 
		j++;
	}
	
	palavra_invertida[j] = '\0';
	
	if(strcmp(palavra, palavra_invertida) == 0)
	{
		printf("\n a palavra é um palidromo!");
	} 
	else
	{
		printf("\n a palavra não é um palidromo!");
	}
		
}
