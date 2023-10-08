#include <stdio.h>

int main()
 {
    int limit,sum = 0;

    printf("Enter a limit: ");
    scanf("%d", &limit);

    for (int num = 1; num <= limit; num += 2) 
	{
        sum+= num;
    }

    printf("Sum of odd numbers within the limit: %d\n", sum);

    return 0;
}
