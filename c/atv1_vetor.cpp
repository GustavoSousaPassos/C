#include<stdio.h>
#include<stdlib.h>

int main()
{
	int q= 0, i, val;
	
	printf("Enter with the width: ");
	scanf("%d", &q);
	
	int v[q];
	
	for(i = 0; i < q; i++)
	{
		//printf("v[%d] = %d\n", i, i);
		printf("Enter with a number: ");
		scanf("%d", &val);
		v[i] = val;
	}
	for(i = 0;i < q;i++)
	{
		printf("v[%d] = %d \n", i, v[i]);
	}
	
	/*int i=0,v[i];
	v[0] = 0;
	v[1] = 1;
	v[2] = 2;
	
	while (i < 2)
	{
		printf("v[%d]: %d \n", i, v[i]);
		i++;
	}*/
	system("pause");
	
}
