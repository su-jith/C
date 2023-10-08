#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,n=10,j;
	for(i=10;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
