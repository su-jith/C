#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	 int limit,values[100],i,searchkey,flag=0;
	 printf("enter limit");
	 scanf("%d",&limit);
	 
	 printf("enter values");
	 for(i=0;i<limit;i++)
	 {
	 	scanf("%d",&values[i]);
	 }
	 printf("please enter search key");
	 scanf("%d",&searchkey);
	 
	 for(i=0;i<limit;i++)
	 {
	 	if(searchkey==values[i])
	 	{
	 		flag=1;
	 		break;
	 	}
	 	
	 }
	 if(flag==1)
	 {
	 	printf("value found at position %d",i+1);
	 }
	 else
	 {
	 	printf("value not found");
	 }
	 return 0;
}
