#include<stdio.h>
int main(){
    
    int num,i;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=num;i>=0;i--){
        printf("%d\n",i);
    }
    printf("\a");
    return 0;

}
//clear