///Write a program to calculate and print the factorial of a given number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0, Fact =0,Num =0;

    for(Num=7,Fact=1;Num>=1;Num--)
    {

    Fact = Fact * Num;
    }

    printf("Factorial Of Given Number 7 is :%d",Fact);

    getch();
    return 0;
}
