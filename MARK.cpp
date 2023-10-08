#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float mark;
	printf("enter your mark");
	scanf("%f",&mark);
	if(mark>=50)
	{
		printf("passed");
	
	}
	else
	{
		printf("failed");
	
	}
	return 0;
}
