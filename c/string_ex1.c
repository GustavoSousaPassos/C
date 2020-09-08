#include<stdio.h>
#include<string.h>

int main()
{
	// Solicita a entrada de uma string e depois pecorre-a inteira
	
	char palavra[20];
	int i=0;
	
	priuntf("Digite uma string: ");
	gets(palavra);
	
	while(palavra[i] != '\0')
	{
		printf("\n %c", palavra[i]);
		i++;
	}	
	
}
