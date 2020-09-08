#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, resultado;
	
	printf("Put a number: ");
	scanf("%d", &n1);
	printf("Put other number: ");
	scanf("%d", &n2);
	resultado = n1 + n2;
	printf("The result is same %d\n", resultado);
	system("pause");
}
