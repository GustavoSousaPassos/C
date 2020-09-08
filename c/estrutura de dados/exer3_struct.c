#include<stdio.h>
#include<string.h>

struct Dat_nasc
{
	int dia, mes, ano;
};

struct Endereco
{
	char logradouro[50];
};

struct Cliente
{
	int cod_cliente;
	char nome[70];
	struct Endereco endereco;
	struct Dat_nasc nasc;
	int num;
	char bairro[40];
	char cidade[50];
	char cep[8];
	
};

int main()
{
	struct Cliente cliente;
	
	printf("-----DADOS DO CLIENTE-----\n\n");
	printf("Codigo: ");
	scanf("%d", &cliente.cod_cliente);
	fflush(stdin);
	printf("Nome: ");
	gets(cliente.nome);
	printf("Dia de nascimento: ");
	scanf("%d", &cliente.nasc.dia);
	printf("mes de nascimento: ");
	scanf("%d", &cliente.nasc.mes);
	printf("Ano de nascimento: ");
	scanf("%d", &cliente.nasc.ano);
	fflush(stdin);
	printf("Logradouro ");
	gets(cliente.endereco.logradouro);
	printf("Número: ");
	scanf("%d", &cliente.num);
	fflush(stdin);
	printf("CEP: ");
	gets(cliente.cep);
	fflush(stdin);
	printf("Bairro: ");
	gets(cliente.bairro);
	fflush(stdin);
	printf("Cidade: ");
	gets(cliente.cidade);
	
	printf("\n\n------REGISTRO DO CLIENTE-----\n\n");
	printf("Codigo: %d", cliente.cod_cliente);
	printf("\nNome: ");
	puts(cliente.nome);
	printf("\nEndereço: %s, %s", cliente.endereco.logradouro, cliente.num);
	
	
}
