#include<stdio.h>
#include<stdlib.h>

int sum();
int main(void)
{
	int result;
	result=sum();
	return 0;
}

int sum()
{
	int num1;
	int num2;
	int result;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	result=num1+num2;
	printf("result is %d",result);
}
