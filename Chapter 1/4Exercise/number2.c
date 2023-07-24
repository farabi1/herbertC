#include <stdio.h>
int main(void)
{

    int year, second;

    printf("Enter the number of year : ");
    scanf("%d", &year);

    second = year * 365 * 24 * 60 * 60;
    printf("Total seconds in %d year is %d seconds", year, second);

    return 0;
}
// clear