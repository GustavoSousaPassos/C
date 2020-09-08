#include<stdio.h>


int main()
{
	/*int p, q, r;
	int *s, *t, *u;
	
	p = 1;
	q = 2;

	s = &q;
	t = &p;
	
	r = (*t + *s) * *t;
	u = &r;
	
	printf("s = %d \nt = %d \nu = %d \n", *s, *t,*u);
	printf("Endereço de p : %d \nEndereço de s : %d \n", &p, &s);
	printf("Valor de p : %d \nValor de q : %d", *t, *s);
	 */
	 
	 int e, f, g;
	 int *o, *x;
	 
	 e = 1;
	 f = 2;
	 
	 o = &f;
	 x = &e;
	 
	 g = *o + (*x * *o);
	 
	 printf("Conteudos: \ne = %d \nf = %d \ng = %d \nx = %d \no = %d \n\n", *x, *o, g,x,o);
	 printf("Endereços: \no : %d \nx : %d", &o, &x); 
	 	
}
