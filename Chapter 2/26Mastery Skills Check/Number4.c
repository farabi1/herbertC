#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    int game_number,number_1,number_2,right_answer=0,wrong_answer=0,sum,total;
    srand(time(NULL));
    printf("Enter the number of addition operation : \n");
    scanf("%d",&game_number);
    for (int i=1;i<=game_number;i++){
        number_1=rand()%100;
        number_2=rand()%100;
        sum=number_1+number_2;
        
        printf("What is the sum of %d and %d \n",number_1,number_2);
        scanf("%d",&total);

        if(sum==total){
            printf("Your Answer is RIGHT \n");
            right_answer++;
        }
        else{
            printf("Your answer is WRONG \n");
            printf("Right answer is %d \n",sum);
            wrong_answer++;
        }
    }

    printf("The number of right answer is : %d \n",right_answer);
    printf("The number of wrong answer is : %d",wrong_answer);

    return 0;
}