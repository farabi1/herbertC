#include <stdio.h>
int outnum(void);

int main(void)
{
    int value = outnum();
    printf("Your entered the value : %d", value);
    return 0;
}
int outnum(void)
{
    int value;
    printf("Enter one integer value : ");
    scanf("%d", &value);
    return value;
}

// clear best function