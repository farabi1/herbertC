#include <stdio.h>
void func(void);

int main(void)
{
    func();
    return 0;
}

void func(void)
{
    int i;

    printf("Enter a number : ");
    scanf("%d", &i);
    return i;
}

/*here the problem is the declared function named void func are actually returning a integer value so there is a conflict between declared value and returning value */

// clear
