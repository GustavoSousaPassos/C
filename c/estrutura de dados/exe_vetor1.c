#include<stdio.h>
#include<locale.h>

int main()
{
	int m[3][6], i, j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("m[%d][%d] = ", i, j);
			scanf("%d", &m[i][j]);
			if(m[i][j] < 0)
			{
				m[i][j] = 1;
			}
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<6;j++)
		{
			printf(" %d ", m[i][j]);
		}
		printf("\n");
	}
	
}
