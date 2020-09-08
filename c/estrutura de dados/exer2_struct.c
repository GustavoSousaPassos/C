#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Data
{
	int dia , mes, ano;	
};

struct Produto
{
	int cod_pro;
};

struct Pedido
{
	int cod;
	char nome[50];
	int qtd;
	struct Data dt_ped;
	struct Produto item;
	float salario;
	float val_total;
	float valor;
};

int main()
{
	struct Pedido pedido;
	
	printf("-----DADOS DO PEDIDO-----\n\n");
	printf("codigo: ");
	scanf("%d", &pedido.cod);
	printf("Dia da admissão: ");
	scanf("%d", &pedido.dt_ped.dia);
	printf("mês da admissão: ");
	scanf("%d", &pedido.dt_ped.mes);
	printf("Ano de admissão: ");
	scanf("%d", &pedido.dt_ped.ano);
	printf("Valor total: ");
	scanf("%f", &pedido.val_total);
	fflush(stdin);
	printf("Nome: ");
	gets(pedido.nome);
	fflush(stdin);
	printf("item: ");
	scanf("%d", &pedido.item.cod_pro);
	printf("Quantidade: ");
	scanf("%d", &pedido.qtd);
	printf("Valor: ");
	scanf("%f", &pedido.valor);
	
	printf("\n\n-----REGISTRO DO PEDIDDO-----\n\n");
	printf("Codigo do produto: %d", pedido.cod);
	printf("\nNome: ");
	puts(pedido.nome);
	printf("Valor total: %.2f", pedido.val_total);
	printf("\nitem: %d", pedido.item.cod_pro);
	printf("\nQuantidade: %d", pedido.qtd);
	printf("\nData do pedido: %d/%d/%d", pedido.dt_ped.dia, pedido.dt_ped.mes, pedido.dt_ped.ano);
	printf("\nValor: %.2f", pedido.valor);
}

