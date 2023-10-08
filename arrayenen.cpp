#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int limit;
	int i;
	int array[100];

	int evennumber=0;
	printf("enter size of the array");
	scanf("%d",&limit);
	
	printf("enter values");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<limit;i++)
	{
		if(array[i]%2==0)
		{
			evennumber++;
		 	
		
		}
	}
	printf("number of even number:%d",evennumber);
	return 0;
	
}
