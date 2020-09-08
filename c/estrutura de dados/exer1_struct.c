#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Data
{
	int dia , mes, ano;	
};

struct Funcionario
{
	int matricula;
	char nome[70];
	char cargo[40];
	struct Data dt_adm;
	float salario;
};

int main()
{
	struct Funcionario fun1;
	
	printf("-----REGISTRO DO FUNCIONARIO-----\n\n");
	printf("matricula: ");
	scanf("%d", &fun1.matricula);
	fflush(stdin);
	printf("Nome: ");
	gets(fun1.nome);
	fflush(stdin);
	printf("Cargo: ");
	gets(fun1.cargo);
	printf("Dia da admissão: ");
	scanf("%d", &fun1.dt_adm.dia);
	printf("mês da admissão: ");
	scanf("%d", &fun1.dt_adm.mes);
	printf("Ano de admissão: ");
	scanf("%d", &fun1.dt_adm.ano);
	printf("Salario: ");
	scanf("%f", &fun1.salario);
	
	printf("\n\n-----REGISTRO CRIADO-----\n\n");
	printf("matricula: %d", fun1.matricula);
	printf("\nNome: ");
	puts(fun1.nome);
	printf("Cargo: ");
	puts(fun1.cargo);
	printf("Data de admissão: %d/%d/%d", fun1.dt_adm.dia, fun1.dt_adm.mes, fun1.dt_adm.ano);
	printf("\nSalario: %.2f",fun1.salario);
	
	system("pause");
}
