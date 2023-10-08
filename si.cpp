#include<stdio.h>
#include <stdlib.h>
int main(void)
{
	float pm,ir,years,simpleinterest;
	printf("enter principle amount");
	scanf("%f",&pm);
		printf("enter interest rate");
	scanf("%f",&ir);
		printf("enter number of years");
	scanf("%f",&years);
	simpleinterest=(pm*ir*years)/100;
	printf("simple interest will be %f",simpleinterest);
	return 0;
	
}


