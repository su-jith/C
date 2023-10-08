#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("Sunday");
			break;			
		case 2:
			printf("monday");
			break;
	    case 3:
			printf("tuesday");
			break;
		case 4:
			printf("wednesday");
			break;
		case 5:
			printf("thursday");
			break;
		case 6:
			printf("friday");
			break;
		case 7:
			printf("Saturday");
			break;
		default:
			printf("enter a valid number");
			
	}
	return 0;
}
