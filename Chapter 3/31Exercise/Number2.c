#include<stdio.h>
int main(){

    float circle,rectangle,triangle,radious,height,base,length,width,area;
    int value;
    float pi=3.14;


    printf("There are three area to calculate \n No 1. Circle\n No 2. Rectangle\n No 3. Triangle \n");
    printf("Enter the number value to compute area : ");
    scanf("%d",&value);

    if(value==1){
        printf("Enter the radious value : ");
        scanf("%f",&radious);
        area= pi*radious*radious;
        printf("The value of area is %.2f \n",area);

    }

    else if(value == 2){
        printf("Enter the value of length: ");
        scanf("%f",&length);

        printf("Enter the value of width: ");
        scanf("%f",&width);

        area= length * width;
        printf("The value of area is %.2f \n",area);

    }
    else if(value == 3){
        printf("Enter the value of height: ");
        scanf("%f",&height);

        printf("Enter the value of base: ");
        scanf("%f",&base);

        area=0.5 * height * base;
        printf("The value of area is %.2f \n",area);

    }

    else{
        printf("You have entered wrong input");
    }

    return 0;
}


