#include <stdio.h>
int main(void)
{
    int number;

    printf("Enter the number : ");
    scanf("%d", &number);

    if (number % 2 != 0)
    {
        printf("The number is odd");
    }
    else
        printf("The number is even");

    return 0;
}

// clear