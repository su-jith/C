#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
	    printf("%d is larger",a); 	
	}
	else
	{
		printf("%d is larger",b);
	}
	
	return 0;
	
}

