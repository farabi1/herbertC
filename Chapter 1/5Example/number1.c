/* This program converts Earth days into Jovian years.*/
#include <stdio.h>
int main(void)
{

    float e_days;  /* number of Earth days */
    float j_years; /*equivalent number of Jovian years*/

    /*get number of Earth days*/
    printf("Enter the number of earth days: ");
    scanf("%f", &e_days);

    /*now compute the jovian years*/
    j_years = e_days / (365 * 12.0);
    printf("Equivalent Jovian years : %f", j_years);

    return 0;
}
// clear