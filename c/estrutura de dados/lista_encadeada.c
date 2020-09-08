#include<stdio.h>
#include<string.h>

char s[20];

struct lista
{
	char text[20];
	struct lista * prox;
};

typedef struct lista * tipo_lista;

void inserePar(tipo_lista * primeiro, char letra[20])
{
	tipo_lista no = (tipo_lista) malloc (sizeof(struct lista));	
	no->text[20] = letra;
	strcpy(letra,s);
	no->prox = *primeiro;
	*primeiro = no;
	
}

void mostraLista(tipo_lista primeiro, char texto[20])
{
	int i, j =0, final = strlen(texto);
	char text_invertido[20] = "";
	
	for(i = final; i >= 0; i--)
	{
		text_invertido[j] = texto[i];
		j++;
	}
	
	if(strcmp(texto, text_invertido) == 0)
	{
		printf("É um palidromo!");
	}
	else
	{
		printf("Não é palindormo");
	}

}

int main()
{
	tipo_lista l;
	char texto[20];
	
	printf("Digite alguma palavra ou frase: ");
	gets(texto);
	inserePar(&l, texto);	
	mostraLista(l, texto);
	 
}
