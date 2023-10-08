#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int choice;
	printf("1.porotta \n2.fried rice \n3.biriyani \n4.mandhi \n enter your choice ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("you have selected  porotta");
			break;
		case 2:
		    printf("you have selected fried rice");
		    break;
		case 3:
			printf("you have selected biriyani ");
			break;
		case 4:
			printf("you have selected mandhi");
			break;
		default:
			printf("select a valid item from the menu");
				
	}
	return 0;
}
