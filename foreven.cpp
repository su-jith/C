#include<stdio.h>
#include<stdlib.h>

int main(void)

   {
    int n = 10, i;
    for(i = 0; i <= n; i++)
	    {
        if(i % 2 == 0)
		    {
            printf("%d ", i);
            }
        }
    
    return 0;
}
