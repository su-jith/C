#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is larger",a);
		}
		else
		{
		    printf("%d is larger",c);	
		}
	}
    else
	{
		if(b>c)
		{
			printf("%d is larger",b);
		}
		else
		{
		    printf("%d is larger",c);	
		}
	}
	
	return 0;
}
