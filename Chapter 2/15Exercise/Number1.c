#include <stdio.h>
int main(void)
{

    int num1, num2, choice;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Press 1: for sum \nPress 2: for product \n");
    scanf("%d", &choice);

    if (choice == 1)
        printf("The sum of the two number is : %d", num1 + num2);
    if (choice == 2)
        printf("The product of the two number is : %d", num1 * num2);
    // else
    //     printf("Not valid choice");

    return 0;
}

// ekhane 1st if kaj korle er sathe else o kaj korbe, majher if bad jabe