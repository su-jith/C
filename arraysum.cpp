#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int values [50];
	int i;
	int limit;
	int sum=0;
	
	printf("enter arary limit");
	scanf("%d",&limit);
	printf("enter number");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&values[i]);
		
	}
	for(i=0;i<limit;i++)
	{
		sum=sum+values[i];
		   
	}
	printf("sum is :%d",sum);
	return 0;
	
	 
	
}
