#include<stdio.h>

int main()
{
	int v[5], i, j, aux = 0, flag; //63724
	
	v[0] = 6;
	v[1] = 3;
	v[2] = 7;
	v[3] = 2;
	v[4] = 4;
	
	do
	{
		flag = 0;
		for(i = 0; i <= 4; i++)
		{
				if (v[i] > v[i+1])
				{
					aux = v[i];
					v[i] = v[i+1];
					v[i+1] = aux;
					flag = 1;
				}
		}
	} while(flag == 1);
	for(i=0;i<5;i++)
	{
		printf("\n \n v[%d] = %d \n", i, v[i]);
	}
	
}
	
