#include <stdio.h>

int main(void)
{

    int length, width, height, volume;
    printf("Enter the length of the cube in meter : ");
    scanf("%d", &length);
    printf("Enter the width of the cube in meter : ");
    scanf("%d", &width);
    printf("Enter the height of the cube in meter : ");
    scanf("%d", &height);
    volume = length * width * height;

    printf("The volume of cube is : %d cubic meter", volume);

    return 0;
}
// clear
