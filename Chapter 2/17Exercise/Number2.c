#include <stdio.h>
int main(void)
{

    int num1, num2, ops;
    printf("Enter the operation : \n1: add\n2: substract\n");
    scanf("%d", &ops);
    if (ops == 1)
    {
        printf("Enter the first number : ");
        scanf("%d", &num1);

        printf("Enter the second number : ");
        scanf("%d", &num2);

        printf("The sum of the numbers is : %d", num1 + num2);
    }
    if (ops == 2)
    {
        printf("Enter the first number : ");
        scanf("%d", &num1);

        printf("Enter the second number : ");
        scanf("%d", &num2);

        printf("The substract of the numbers is : %d", num1 - num2);
    }

    return 0;
}
// clear