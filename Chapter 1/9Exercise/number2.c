#include <stdio.h>

void convert(void);

int main()
{
    convert();
    return 0;
}

void convert(void)
{
    float dollar, pound;
    printf("Enter the amount in Dollars : ");
    scanf("%f", &dollar);
    pound = dollar * 2.00;
    printf("%f USD = %f GBP", dollar, pound);
}
