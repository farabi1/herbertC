#include<stdio.h>
int main(){
    
    char che;
    char chb;
    int i;

    printf("Enter your 1 no character : \n");
    scanf("%c",&che);

    for(i = 2;i<=10;i++){
        printf("Enter your %d no character : \n",i);
        scanf(" %c",&chb);

        if (chb<che){
            che=chb;
        }

    }
     printf("The earliest letter in the alphabet among the ten letters is: %c\n", che);
    
    return 0;

}


