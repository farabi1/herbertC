#include <stdio.h>

void func1(void);

int main()
{
    func1();
    return 0;
}

void func1(void)
{
    printf("This is printed");
    return; /*return with no value*/
    //  This will cause a syntax error as it returns nothing from the function and there

    printf("This will never printed");
}

// clear