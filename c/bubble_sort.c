#include <stdio.h>

int main()
{
	int vec[5], i, aux = 0, flag;
	
	vec[0] = 6;
	vec[1] = 3;
	vec[2] = 7;
	vec[3] = 2;
	vec[4] = 4;
	
	do
	{
		flag = 0;
		
		for(i = 0; i < 5; i++)
		{
			if(vec[i] > vec[i+1])
			{
				aux = vec[i];
				vec[i] = vec[i+1];
				vec[i+1] = aux;
				
				flag = 1;
			}
		}
	} while(flag == 1);
	
	for(i = 0; i < 5; i++)
		printf("\n \n vec[%d] = %d\n", i, vec[i]);
}
