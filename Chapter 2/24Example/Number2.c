#include<stdio.h>
int main(){
    int i,j;

    printf("Enter the first number : ");
    scanf("%d",&i);
    printf("Enter the second number : ");
    scanf("%d",&j);

    /* Relational Operations*/

    printf("i<j %d \n",i<j);
    printf("i<=j %d \n",i<=j);
    printf("i==j %d \n",i==j);
    printf("i>j %d \n",i>j);
    printf("i>=j %d \n",i>=j);

    /*Logical Operations*/

    printf("i && j %d \n",i && j);
    printf("i || j %d \n",i ||j);
    printf("!i !j %d %d \n",!i,!j);
    
    return 0;
}
// clear