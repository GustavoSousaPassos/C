#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, v1[2][2], v2[2][2], s[2][2];
	
	v1[0][0] = 0;
	v1[0][1] = 1;
	v1[1][0] = 2;
	v1[1][1] = 3;
	
	v2[0][0] = 0;
	v2[0][1] = 1;
	v2[1][0] = 2;
	v2[1][1] = 3;
	
		
	for(i=0;i<2;i++)
	{
		for(j=0;j<=1;j++)
		{
			/*printf("v1[%d][%d] = %d \n", i, j, v1[i][j]);
			printf("\n v2[%d][%d] = %d \n", i, j,v2[i][j]);*/
			s[i][j] = v1[i][j] + v2[i][j];
			printf("Soma das matrizes: v3[%d][%d] = %d \n", i, j, s[i][j]);			

		}
	}
	system("pause");
	return 0;
	// somar duas matrizes ixj, onde i são linhas(comprimento) e j as colunas(largura) 
}
