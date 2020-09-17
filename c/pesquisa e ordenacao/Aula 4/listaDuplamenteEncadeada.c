#include<stdio.h>
#include<stdlib.h>
					// Implementação de lista duplamente encadeada(lista linear onde 
					// variaveis do tipo struct são ligados por meio de dois campos
					// do tipo ponteiros que se conecta tanto aos nodos, que 
					// possibilitem percorrer a lista do inicio tanto do inicio ao 
					// fim quanto o contrario) e algoritmos de manipulação (inserção,
					// impressão, busca e remoção)
				

typedef struct nodo
{
	struct nodo *ant;
	char valor;
	struct nodo *prox;	
}lista;										// criar um tipo de dado chamado lista

lista *inicio = NULL; 						// varicavél que ira conter o endereço do nó inicial

// METODOS DE MANIPULAÇÃO

void inserir( lista *aponta, char x)
{
	lista * aux;							// variavel auxiliar para criar um novo nó
	aux = (lista*)malloc(sizeof(lista)); 	// aloca dinamicamente 
	aux -> valor = x;
	
	if(aponta == NULL)
	{
		inicio = aux;
		inicio -> ant = NULL;
		inicio -> prox = NULL;
	}
	else
	{
		while(aponta -> prox != NULL)
			aponta  = aponta -> prox;
		aux -> ant  = aponta;
		aux -> prox = NULL;
		aponta -> prox = aux;
	}
}

lista* procurar(lista *aponta, char x)
{
	while(aponta != NULL)
	{
		if(x == aponta -> valor)
			return aponta; 
		else
			aponta  = aponta -> prox;
	}
	return NULL;
}

void imprimir(lista *aponta)
{
	lista *anterior;
	printf("Da esquerda para a direita: ");
	while(aponta != NULL)
	{
		printf(" %c ", aponta -> valor);
		anterior  = aponta;
		aponta  = aponta -> prox;
	}
	
	printf("\nDa direita para a esquerda: ");
	while(anterior != NULL)
	{
		printf(" %c ", anterior -> valor);
		anterior = anterior -> ant;
	}
}

int retirar(lista *aponta, char x)
{
	lista *aux;
	
	if(aponta == NULL)
		return 0;
	else
	{
		if(x == aponta -> valor)
		{
			aux = aponta;
			inicio = aponta -> prox;
			inicio -> ant = NULL;
			free(aux);
			return 1;
		}
		else
		{
			while(aponta -> prox != NULL)
			{
				if(x == aponta -> prox -> valor)
				{
					aux = aponta -> prox;
					aponta -> prox = aux -> prox;
					
					if(aux -> prox != NULL)
						aux -> prox -> ant = aux -> ant;
					
					free(aux);
					return 1;
				}
				else
					aponta  = aponta -> prox;
			}
		}
	return 0;
	}
}

void destruirLista(lista *aponta)
{
	while(aponta != NULL)
	{
		inicio = aponta -> prox;
		free(aponta);
		aponta = inicio;
	}
}

int main()
{
	char dado, resposta;
	
	inserir(inicio, 'a');
	inserir(inicio, 'b');
	inserir(inicio, 'c');
	inserir(inicio, 'd');
	inserir(inicio, 'e');
	inserir(inicio, 'f');
	inserir(inicio, 'g');
	inserir(inicio, 'h');
	
	imprimir(inicio);
	
	printf("\n\nDado a ser procurado: ");
	fflush(stdin);
	scanf("%c", &dado);
	
	if(retirar(inicio, dado) == 0)
		printf("* * * Não encontrado * * * \n\n");
	else
		printf("* * * Valor encontrado! * * *\n\n");
	
	fflush(stdin);
	printf("Dado a ser retirado: ");
	scanf("%c", &dado);
	
	if(retirar(inicio, dado) == 0)
		printf("* * * Não encontrado * * *\n\n");
	else
		printf("* * * Valor retirado * * * ");
	
	imprimir(inicio);
	destruirLista(inicio);
	getch();
	
	return 0;
}
