#include <stdio.h>
int main()
{

    int num, i;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}

// Here in for loop if i set to 1 and condition set to <= then all of the factor will be shown

// clear