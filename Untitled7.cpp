#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float a, b, result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("1 - Add\n2 - Subtract\n3 - Multiply\n4 - Divide\nSelect your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        result = a + b;
        printf("Result = %f\n", result);
    }
    else if (choice == 2)
    {
        result = a - b;
        printf("Result = %f\n", result);
    }
    else if (choice == 3)
    {
        result = a * b;
        printf("Result = %f\n", result);
    }
    else if (choice == 4)
    {
        result = a / b;
        printf("Result = %f\n", result);
    }
    else
    {
        printf("Select your operation.\n");
    }

    return 0;
}
