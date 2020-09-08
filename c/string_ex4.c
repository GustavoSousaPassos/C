#include<stdio.h>
#include<string.h>
#include<locale.h>

int main()
{
	// substitue as vogais 'a' pela 'i'
	
	char palavra[20];
	int i, tam;
	
	printf("Enter with a string: ");
	gets(palavra);
	
	tam = strlen(palavra);
	
	for(i = 0; i < tam; i++)
	{
		if(palavra[i] == 'a')
		{
			palavra[i] = 'i';
		}
	}
	puts(palavra);
}
