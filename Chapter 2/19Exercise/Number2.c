#include <stdio.h>
int main()
{

    int num;
    for (num = 17; num <= 100; num++)
    {
        if (num % 17 == 0)
        {
            printf("%d\n", num);
        }
    }
    return 0;
}
// clear