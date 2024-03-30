#include<stdio.h>
int main(){
    
    int length,width,total=0,room_no,dimension;
    printf("Enter the number of room : ");
    scanf("%d",&room_no);
    for(int i=1;i<=room_no;i++){
        printf("Enter the length of room %d :",i);
        scanf("%d",&length);
        printf("Enter the width of room %d :",i);
        scanf("%d",&width);
        dimension=length*width;
        total=total+dimension;
        
    }

    printf("Total square footage is %d \n",total);
    
    return 0;
}

//for loop er vitorer variable baire theke access kora jai
// clear