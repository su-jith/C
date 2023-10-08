#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
    float totalmark;
    printf("Enter your total mark: ");
    scanf("%f", &totalmark);

    if(totalmark >= 90)
	 {
        printf("A");
     } 
	else if(totalmark >= 80) 
	 {
        printf("B");
     }
	else if(totalmark >= 70)
   	 {
        printf("C");
     }
    else if(totalmark >= 60) 
	 {
        printf("D");
     } 
	else if(totalmark >= 50) 
	 {
        printf("E");
     } 
	else 
	 {
        printf("Failed");
     }

    return 0;
}













