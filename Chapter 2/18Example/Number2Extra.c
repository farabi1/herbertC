#include <stdio.h>

int main()
{
    int loop, number;
    int prime = 1;

    printf("Enter the number : ");
    scanf("%d", &number);

    for (loop = 2; loop < number; loop++)
    {
        if ((number % loop) == 0)
        {
            prime = 0;
        }
    }

    if (prime == 1)
        printf("%d is prime number.", number);
    else
        printf("%d is not a prime number.", number);
    return 0;
}
// clear