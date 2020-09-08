#include<stdio.h>
#include<locale.h>

int main() 			//Programa que faz a atribuição da soma de forma indireta, por meio de ponteiros
{
	setlocale(LC_ALL, "Portuguese"); 
	
	float a, b, r;
	float *pa, *pb;
	
	a = 7.3;
	b = 11.5;
	pa = &a;
	pb = &b;
	r = *pa + *pb;
	
	printf("Soma de a e b via ponteiros = %f", r);
	
}
