#include<stdio.h>
#include<conio.h>

/*
	Calculo usado: fibonacci(o n�mero da sequencia � formado pela soma dos 
				   dois anteriores)
				   
	Recursividade dupla: quando se tem duas ou mais chamadas recursivas em uma 
						 fun��o
*/

int fibonacci(int n)
{
	if(n == 0 || n == 1) return n;
	else return (fibonacci(n - 1) + fibonacci(n - 2));
}

main()
{
	int i, num;
	
	printf("Put: ");
	scanf("%d", &num);
	
	printf("Sequencia fibonacci: => ");
	
	for(i = 0; i < num; i++)
		printf("%d	", fibonacci(i));
	getch();
}
