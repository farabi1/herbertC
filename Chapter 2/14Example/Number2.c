#include <stdio.h>
int main()
{

    int number;
    printf("Enter a integer : ");
    scanf("%d", &number); /*Ekhane &number ke just number likhsilam*/
    if ((number % 2) == 0)
        printf("The number is even");
    if ((number % 2) != 0)
        printf("The number is odd");

    return 0;
}

// clear