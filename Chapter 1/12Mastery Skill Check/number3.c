#include <stdio.h>

float o_to_c(void);

int main(void)
{
    float numberOfCup = o_to_c();
    printf("the number of cup are : %f", numberOfCup);

    return 0;
}

float o_to_c(void)
{
    float ounce, cup;
    printf("Enter the number of ounce : ");
    scanf("%f", &ounce);
    cup = (ounce / 8);
    return cup;
}

// clear - Function ok-return type