
///Write a program to print the letters from H to N using a loop. (forward, fixed range)
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("Letters Of H To N is =>");
    ch = 'H';

    while(ch <= 'N')
    {
        printf("%c",ch);
        ch++;
    }
    getch();
    return 0;
}


