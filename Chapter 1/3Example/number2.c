#include <stdio.h>

int main(void)
{

    int count, num, val, total1, total2;
    printf("Enter the number of count: ");
    scanf("%d", &count);
    printf("Enter the number of num: ");
    scanf("%d", &num);
    printf("Enter the number of val: ");
    scanf("%d", &val);

    total1 = count * num + 88 / val - 19 % count;
    total2 = (count * num) + (88 / val) - (19 % count);
    printf("The total1 is : %d \n", total1);
    printf("The total2 is : %d", total2);
    return 0;
}
// clear