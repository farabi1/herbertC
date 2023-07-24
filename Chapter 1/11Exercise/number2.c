#include <stdio.h>

void sqr_it(int num);
int main()
{
    sqr_it(25.1);
    return 0;
}
void sqr_it(int num)
{
    printf("%d", num * num);
}

/* though it produce the correct result but wrong is, as i declared the parameter as int number but provided the parameter with float so the value after the point are totally ingnored

-- if i make this float then this will make garbage value*/

// clear