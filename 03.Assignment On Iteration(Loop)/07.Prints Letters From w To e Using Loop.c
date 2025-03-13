///Write a program to print the letters from w to e using a loop. (reverse, fixed range)
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '\0';
    printf("Letters From w to e is =>");
    ch ='w';

    while(ch >= 'e')
    {
        printf(" %c ",ch);
        ch --;
    }
    getch();
    return 0;


}
