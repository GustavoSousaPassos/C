#include<stdio.h>
#include<string.h>

int main()
{
	int i, tam, cont=0;
	char textao[40];
	
	printf("Coloaca uma palavra aqui: ");
	gets(textao);
	tam = strlen(textao);
	
	for(i = 0;i < tam; i++)
	{
		if(textao[i] == 'c')
		{
			cont++;
		}
	}
	printf("Foram digitados %d letras \"c\" ", cont);
}
