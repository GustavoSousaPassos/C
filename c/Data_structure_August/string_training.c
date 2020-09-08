#include<stdio.h>
#include<string.h>

struct Pessoa
{
	char fullName[40];
};

char* insereNomeCompleto(char nome[], char sobrenome[])
{
	char nomeCompleto[40];
	strcpy(nomeCompleto, nome);
	strcat(nomeCompleto, " ");
	strcat(nomeCompleto, sobrenome);
	
	return nomeCompleto;
}

int main()
{
	struct Pessoa p1;
	char nome[10], sobrenome[30];
	
	gets(nome);
	gets(sobrenome);
	
	strcpy(p1.fullName, insereNomeCompleto(nome, sobrenome));
	
	puts(p1.fullName);
	
}
