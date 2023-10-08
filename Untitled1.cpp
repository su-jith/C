
#include<stdio.h>
int main()
{
	int ar[1000],n,i,p,d;
	printf("enter the size of array :");
	scanf("%d",&n);
	printf("enter the elements of array :\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&ar[i]);
	}
	printf("the elements of array are:");
	for(i=0;i<n;i++)
	{
	printf("\n%d",ar[i]);
	}
	printf("\nenter the position were you want to insert value");
	scanf("%d",&p);
	printf("\nenter the element that u need to insert");
	scanf("%d",&d);
	for(i=n;i>p;i--)
	{
	ar[i]=ar[i-1];
	}
	ar[p]=d;
	n++;
	printf("array after insertion :");
	for(i=0;i<n;i++)
	{
	printf("\n%d",ar[i]);
	}
	printf("\n");

	return 0;

}
