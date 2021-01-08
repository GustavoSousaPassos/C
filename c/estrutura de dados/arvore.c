#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct no_arv
{
	int info;
	struct no_arv *esq;
	struct no_arv *dir;
} no_arv;

typedef struct no_arv *tipo_arv;
tipo_arv raiz = NULL;

int arvoreVazia()
{
	if(raiz==NULL)
		return(1);
	return 0;
}

tipo_arv criaRaiz(int x)
{
	tipo_arv novoNo = (tipo_arv)malloc(sizeof(no_arv));
	novoNo->info = x;
	novoNo->esq = NULL;
	novoNo->dir = NULL;
	raiz = novoNo;
	return novoNo;
}

tipo_arv insereDir(tipo_arv *pai, int x)
{
	tipo_arv no_pai = *pai;
	if(!arvoreVazia())
	{
		if(no_pai->dir != NULL)
		{
			printf("\n No direito ja ocupado");
			return NULL;
		}
		else
		{
			tipo_arv novoNo = (tipo_arv)malloc(sizeof(no_arv));
			novoNo->info = x;
			novoNo->esq = NULL;
			novoNo->dir = NULL;
			no_pai->dir = novoNo;
			return(novoNo);
		}
	}
	return NULL;
}

tipo_arv insereEsq(tipo_arv *pai, int x)
{
	tipo_arv no_pai = *pai;

	if(!arvoreVazia())
	{
		if(no_pai->esq != NULL)
		{
			printf("\n No esquerdo ja ocupado");
			return NULL;
		}
		else
		{
			tipo_arv novoNo = (tipo_arv)malloc(sizeof(no_arv));
			novoNo->info = x;
			novoNo->esq = NULL;
			novoNo->dir = NULL;
			no_pai->esq = novoNo;
			return(novoNo);
		}
	}
	return NULL;
}

/************************** Tipos de percurso em árvores binarias ********************/


// Pré-ordem
void percursoPreOrdem()
{
	preordem(raiz);
}

void preordem(tipo_arv r)
{
	if(r != NULL)
	{
		printf("%d, ", r->info);
		preordem(r->esq);
		preordem(r->dir);
	}
}

// Em-ordem

void percursoEmOrdem()
{
	emordem(raiz);
}

void emordem(tipo_arv r)
{
	if(r != NULL)
	{
		emordem(r->esq);
		printf("%d, ", r->info);
		emordem(r->dir);
	}
}

// Pós-ordem

void percursoPosOrdem()
{
	posordem(raiz);
}

void posordem(tipo_arv r)
{
	if(r != NULL)
	{
		posordem(r->esq);
		posordem(r->dir);
		printf("%d", r->info);
	}
}

int main()
{
	tipo_arv No;
	raiz = criaRaiz(10);
	No = raiz;
	insereDir(&No, 12);
	No = insereEsq(&No, 5);
	insereEsq(&No, 2);
	No = insereDir(&No, 8);
	getch();	
}

