#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[5];
	int i;
	int limit;
	printf("enter array limit");
	scanf("%d",&limit);
	printf("enter values ");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enetred values are");
	for(i=0;i<limit;i++)
	{
		printf("%d,",a[i]);
	}
	
	return 0;
}
