// #include <stdio.h>
// int main()
// {

//     int number;
//     printf("Enter a integer : ");
//     scanf("%d", &number); /*Ekhane &number ke just number likhsilam*/
//     if ((number % 2) == 0)
//         printf("The number is even");
//     if ((number % 2) != 0)
//         printf("The number is odd");

//     return 0;
// }

// clear

#include <stdio.h>
int main(void)
{

    int num1, num2;
    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num2 == 0)
        printf("Cannot divide by zero.");
    else
        printf("Answer is : %d", num1 / num2);
    return 0;
}

// clear