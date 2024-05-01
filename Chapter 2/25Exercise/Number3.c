/* a. this will print true or 1*/
/* b. this will print false or 0*/

#include<stdio.h>
int main(){

    printf("0 && 1 || 1 is : %d \n",0 && 1||1);
    printf("0 && (1 || 1) is : %d",0 && (1||1));

    return 0;
}
// clear