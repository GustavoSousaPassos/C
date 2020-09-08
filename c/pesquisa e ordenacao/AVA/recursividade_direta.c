#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/* 
	Calculo usado: maximo divisor comum (mdc)

	Recursividade direta: a chamada é feita dentro da função, 
	criando loop
*/

int mdc(int nA, int nB)
{
	if(nB == 0) return nA;
	else return mdc(nB, nA % nB);		
}

main()
{
	int n1, n2;
	
	printf("Put the first value: ");
	scanf("%d", &n1);
	printf("Put the second value: ");
	scanf("%d", &n2);
	
	printf("\nmdc = %d\n", mdc(n1, n2));
	getch();
}
