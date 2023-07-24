#include <stdio.h>

int f1(void);

int main(void)
{
    double answer;
    answer = f1();
    printf("%f", answer);
    return 0;
}

int f1(void)
{
    return 100;
}
/*the program produce output result in float form but the value was initially returned from function as intiger , so in the main function the value converted from intiger to double form and ultimately produce the ans as 100.00000*/

// clear