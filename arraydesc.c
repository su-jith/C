#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int limit;
	int i,j;
	int values[200];
	int temp;
	printf("enter array size");
	scanf("%d",&limit);
	
	printf("enter the values");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&values[i]);
	}
	for(i=0;i<limit;i++)
	{
		for(j=i+1;j<limit;j++)
		{
			if(values[i]<values[j])
			{
				temp=values[i];
				values[i]=values[j];
				values[j]=temp;
			}
			
		}
	}
	printf("sorted array:");
	for(i=0;i<limit;i++)
	{
		printf("%d\t",values[i]);
	}
	return 0;
	
}
