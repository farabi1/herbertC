#include <stdio.h>
int main(void)
{
    float num;
    int choice;

    printf("Enter value : ");
    scanf("%f", &num);

    printf(" 1: Feet to Meters,\n 2: Meters to Feet. \n");
    printf("Enter choice : ");
    scanf("%d", &choice);

    if (choice == 1)
        printf("%f meter", num / 3.28);
    if (choice == 2)
        printf("%f feet", num * 3.28);

    return 0;
}
// clear
