#include<stdio.h>
int main(){

    int a,number=5;
    int b=1;
    int column=3;
    for(a=1;a<=number;a++){
        printf("%5d",a); 

        if (b==column){
            printf("\n");
            b=0;
        } 
        b++;
    }
    if ((number%column)!=0){
        printf("\n");
    }


    return 0;
}



// clear 