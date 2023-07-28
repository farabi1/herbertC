// a. 0 is false
// b. 1 is true
// c. 10 * 9 < 90 is false
// d. 1==1 is true
// e. -1 is true

// clear

#include <stdio.h>
int main()
{

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0)
        printf("Number is negetive.");
    else
        printf("Number is non-negative");
    return 0;
}
// clear