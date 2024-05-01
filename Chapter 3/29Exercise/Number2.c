// #include<stdio.h>
// int main(){

//     char ch;
//     printf("Enter kthe character :");
//     ch=getchar();
//     getchar();
//     printf("The ASCII Code for the entered character is %d",ch);
//     return 0;
// }



#include<stdio.h>
int main(){

    // for A through Z
    for (char c='A';c<='Z';c++){
        printf("%c %d \n",c,c);
    }

    // for a through z

    for(char c='a';c<='z';c++){
        printf("%c %d \n",c,c);
    }

    return 0;
}

// clear