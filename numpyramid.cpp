#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			i=i++;
			printf("%d",j);
		}
		printf("\n");
	
	}
	return 0;
}
