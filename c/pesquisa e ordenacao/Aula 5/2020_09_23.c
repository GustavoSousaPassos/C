#include<stdio.h>

/*char * string()
{
	return "maria";
}

char caractere()
{
	return 'a';
}

float real()
{
	return 1.5;
}

int inteiro()
{
	return 8;
}
*/

int mensagem(int numero)
{
	printf("Bom dia %d", numero);
	numero++;
	mensagem(numero);
}

main()
{
	/*printf("String  = %s\n", string());
	printf("Caractere = %c\n", caractere());
	printf("Real = %.2f\n", real());
	printf("Inteiro = %d\n", inteiro());*/
	
	mensagem(1);
	
	//return 0;//error Level  -> 0 = executa com sucesso
}
