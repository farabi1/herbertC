#include<stdio.h>
int main(){

    int a,b;
    char ch;

    printf("Do you want to :\n");
    printf("Add,Subtract,Multiply,or Divide?\n");
    printf("Enter first letter of operation :");
    ch=getchar();
    printf("\n");

    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);

    if(ch=='A')printf("Result of Add is %d",a+b);
    if(ch=='S')printf("Result of Subtract is %d",a-b);
    if(ch=='M')printf("Result of Multiply is %d",a*b);
    if(ch=='D' && b!=0)printf("Result of Divide is %d",a/b);


    return 0;
}

//clear