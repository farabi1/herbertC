#include <stdio.h>

void function1(void);
void function2(void);
int main(void)
{
    function1();
    function2();
    return 0;
}

void function1(void)
{
    printf("The summer soldier, ");
}

void function2(void)
{
    printf("the sunshine patriot.");
}

// clear