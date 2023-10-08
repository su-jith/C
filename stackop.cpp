#include<stdio.h>
#include<conio.h>
int push();
int pop();
int display();
int stack[100],top=-1,x,n,i;
	
int main()
	
{
	int c;

	printf("enter the size of the stack");
	scanf("%d",&n);
	while(1)
	{
		printf("enter the operation you want to perform");
		printf("enter the operation you want to perform\n\t");
		printf("1.push\n 2.pop\n 3.display\n 4.exit\n\t");
		scanf("%d",&c);
		switch(c)
		{
			case 1: push();
			        break;
			        
			case 2: pop();
			        break;
			        
		    case 3: display();
		            break;
		}
	}
   
		 
return 0;	
}
 push()
	{
		if(top==n-1)
			{
			printf("overflow");
			}
		else
		{
				printf("enter the element you want to insert");
				scanf("%d",&x);
				top=top++;
				stack[top]=x;
				
		}
		return 0;
}
pop()
{
	if(top==-1)
	{
		printf("underflow");
	}
	else
	{
		top=top--;
	}
	return 0;
}
display()
{
	printf("elments in the stack are");
	for(i=0;i<n;i++)
	{
		printf("%d",stack[i]);
    }
	return 0;	
}
	
