#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

typedef struct nodo
{
	struct nodo *esq;
	char info;
	struct nodo *dir;
}tipo_abb;

void inserir(tipo_abb **t, char x)		// **t é o ponteiro para o ponteiro
{
	if(*t == NULL) 		//se não haver nenhum valor na raiz
	{
		*t = (tipo_abb *)malloc(sizeof(tipo_abb));
		(*t)-> info = x;
		(*t)-> esq = NULL;
		(*t)-> dir = NULL;
	}
	else	// se o nó possuir filhos
		if(x < (*t) -> info)
			inserir(&((*t)-> esq), x);
		else
			inserir(&((*t)-> dir), x);
}

tipo_abb* pesquisar(tipo_abb *t, char x)		// t aponta para a raiz
{
	if(t == NULL)
		return NULL;
	else
		if(t -> info == x)
			return t;
		else
			if(x < t -> info)
				return pesquisar(t -> esq, x);
			else
				return pesquisar(t -> dir, x);
}

tipo_abb* menor_valor(tipo_abb *t)
{
	if(t == NULL)
		return NULL;
	else
		if(t -> esq == NULL)
			return t;
		else
			return menor_valor(t->esq);
}

void remover(tipo_abb **t, char x)
{
	tipo_abb *aux;
	
	if(*t != NULL)
		if(x < (*t) -> info)
			remover(&((*t) -> esq), x);
		else
		{
			if(((*t) -> esq != NULL) && ((*t) -> dir != NULL))
			{
				aux = menor_valor((*t)->dir);
				(*t) -> info = (aux -> info);
				remover(&(*t) -> dir, (*t) -> info);
			}
			else
			{
				aux = *t;
				
				if((*t) -> esq == NULL)
					*t = (*t) -> dir;
				else
					*t = (*t) -> esq;
				
				free(aux);
				printf("Valor retirrado da árvore"); 
			}
		}
	else
		printf("Valor não existe na árvore.");
}

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	tipo_abb *tree = NULL; 		// variavél ponteiro aponta para o primeiro valor da árvore
	char valor, vetor[11] = {'N', 'C', 'F', 'R', 'D', 'A', 'P', 'C', 'V', 'E', 'T'};
	
	int i;
	
	for(i = 0; i < 11; i++)
	{
		inserir(&tree, vetor[i]);
		printf("Valor %c inserido na árvore.\n", vetor[i]);
	}
	
	printf("\n\nDigite o valor a ser procurado: ");
	scanf("%c", &valor);
	
	if(pesquisar(tree, valor) == NULL)
		printf("Este valor não está na árvore\n\n");
	else
		printf("Este valor está na árvore.\n\n");
	
	fflush(stdin);
	printf("\n\nDigite o valor a ser retirado: ");
	scanf("%c", &valor);
	remover(&tree, valor);
}
