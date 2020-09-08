#include<stdio.h>
#include<string.h>
#include<locale.h>

int main()
{
	// Conta as vogais dentro de uma string
	
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[20];
	int i = 0, qtd = 0;
	
	printf("Entre com uma string: ");
	gets(palavra);
	
	while(palavra[i] != '\0')
	{
		if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
		{
			qtd++;
		}
		i++;
	}	
	printf("A quantidade de vogais da palavra é igual a %d", qtd);
		
}
