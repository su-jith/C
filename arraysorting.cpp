#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int limit;
	int values[100];
	int i,j;
	int temp;
	
	printf("enter the limit");
	scanf("%d",&limit);
	printf("enter the the values");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&values[i]);
	
	}
	
	for(i=0;i<limit-1;i++)
	{
		for(j=i+1;j<limit;j++)
		{  
			if(values[i]>values[j])
			{
				temp=values[i];
				values[i]=values[j];
				values[j]=temp;
			}
			
		}
	}
	for(i=0;i<limit;i++)
	{
		printf("%d\t",values[i]);
	}
	return 0;
	
}
