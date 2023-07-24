/* First Program - A Program with two functions*/

/*
#include <stdio.h>

void func1(void); /*prototype for func1()*/

/*

int main(void)
{
    printf("I ");
    func1();
    printf("C. ");

    return 0;
}
void func1(void)
{
    printf("like ");
}

*/

// first program clear

/*Second program - A program with three function*/

#include <stdio.h>

void func1(void);
void func2(void);
int main(void)
{
    func2();
    printf("3");

    return 0;
}

void func2(void)
{
    func1();
    printf("2 ");
}

void func1(void)
{
    printf("1 ");
}

// clear