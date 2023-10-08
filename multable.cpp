#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,i,result;
	printf("enter a number");
	scanf("%d",&n);
	for(i=0;i<=10;i++)
	{
		result=i*n;
		printf("%d * %d =%d\n",i,n,result);
		
	}
	
	return 0;
}
