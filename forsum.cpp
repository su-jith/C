#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n,i,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<n;i++);
	{
		sum=sum+1;
	}
	printf("result=%d",sum);
	return 0;
}
