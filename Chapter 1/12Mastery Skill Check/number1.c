/*
#include <stdio.h>

int main(void)
{
    int earthWeight, moonWeight, newWeight;
    printf("Enter the weight in Earth : ");
    scanf("%d", &earthWeight);
    newWeight = (earthWeight * (1 - (17 / 100)));
    printf("The weight in moon is : %d", newWeight);
    return 0;
}

*/

/*
#include <stdio.h>

int main(void)
{
    float ew, mw, nw;
    printf("Enter the weight in Earth : ");
    scanf("%f", &ew);
    // nw = (ew * 17) / 100;
    mw = ew - (ew * 17) / 100;
    // mw = (ew * (1 - (17 / 100)));
    printf("The weight in moon is : %f", mw);
    return 0;
}

*/

#include <stdio.h>

int main(void)
{
    float ew, mw, nw;
    printf("Enter the weight in Earth : ");
    scanf("%f", &ew);
    mw = ew - (ew * 17) / 100;
    printf("The weight in moon is : %f", mw);
    return 0;
}

// clear - best debugging