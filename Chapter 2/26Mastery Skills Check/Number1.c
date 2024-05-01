#include<stdio.h>
int main(){
    printf("Guess the magic number game \n");
    int magic_number=20,guessed_number;
    for (int i =1;i<=10;i++){
    printf("Enter the number you have guessed : ");
    scanf("%d",&guessed_number);
    
        if (guessed_number==magic_number){
            printf("RIGHT \n");
            return 0;
    
        }
        else if(guessed_number<magic_number){
            printf("Guessed number is lower then the magic number \n");
            printf("You have %d guess left \n",10-i);
            
        }
        else if(guessed_number>magic_number){
            printf("Guessed number is higher then the magic number \n");
            printf("You have %d guess left \n",10-i);
        }
    }
    

    
    return 0;
}

//clear

//point can I use return 0; more then one in a c program