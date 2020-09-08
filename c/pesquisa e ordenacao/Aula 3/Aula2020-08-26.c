#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float ladoQuadrado;
	
	printf("Digite o lado do quadrado: ");
	scanf("%f", &ladoQuadrado);
	
	printf("A area do quadrado de lado %.2f é igual a %.2f", ladoQuadrado, ladoQuadrado * ladoQuadrado);
	system("pause");
}
