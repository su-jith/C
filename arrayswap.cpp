#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int limit;
	int i,j;
	int array1[100];
	int array2[100];
	int temp;
	
	printf("enter array limit");
	scanf("%d",&limit);
	
	printf("enter values of first array");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&array1[i]);
	}
	
	printf("enter values of second array");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&array2[i]);
	}
	for(i=0;i<limit;i++)
	{
		temp=array1[i];
      	array1[i]=array2[i];
	    array2[i]=temp;
	}
	
	printf("array after swapping\n");
	printf("array1:");
	for(i=0;i<limit;i++)
	{
		printf("%d\t",array1[i]);
		
	}
	printf("\n");
	
	printf("array2:");
	for(i=0;i<limit;i++)
	{
		printf("%d\t",array2[i]);
		
	}
	printf("\n");
	
	
	
	return 0;
	
	
	
}
