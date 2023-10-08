#include<stdio.h>
#include<stdlib.h>

int sum(int,int);
int main(void)

{
	int a,b,res;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	sum(a,b);
	res=sum(a,b);
	printf("result is %d",res);
	return 0;
	
}

int sum(int num1,int num2)
{
	int result;
	result=num1+num2;
	return result;
	
}
