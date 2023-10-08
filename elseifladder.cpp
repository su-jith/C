#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int choice;
	float a,b,result;
	printf("enter two numbers");
	scanf("%f%f",&a,&b);
	printf("1-add\n 2-subtract\n 3-multiply\n 4-division\n select your choice\n" );
	scanf("%d",&choice);
	if(choice==1)
	{
		result=a+b;
		printf("result=%f\n",result);
	}
	else if(choice==2)
	{
		result=a-b;
		printf("result=%f\n",result);
	}
	else if(choice==3)
	{
		result=a*b;
		printf("result=%f\n",result);
	}
	else if(choice==2)
	{
		result=a/b;
		printf("result=%f\n",result);
	}
	else
	{
		printf("selec your operation\n");
	}
	
	return 0;
	

}
