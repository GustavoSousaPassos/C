#include<stdio.h>
#include<conio.h>

/* 
	Calculo utilizado: maximo divisor comum

	Recursividade indireta: quando uma função chama a outra, 
 	e essa chama a função que a chamou
*/
int mdc1(int nA, int nB)
{
	if(nB == 0) return nA;
	else return mdc2(nB, nA % nB);
}

int mdc2(int nC, int nD)
{
	if(nD == 0) return nC;
	else return mdc1(nD, nC % nD);
}

main()
{
	int n1, n2;
	
	printf("Put the first value: ");
	scanf("%d", &n1);
	printf("Put the second value: ");
	scanf("%d", &n2);
	
	printf("\nmdc = %d\n", mdc1(n1, n2));
	getch();
}
