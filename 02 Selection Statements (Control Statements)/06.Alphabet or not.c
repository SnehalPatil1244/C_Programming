#include<stdio.h>
#include<conio.h>

int main()
{
    char ch =0;

    printf("Enter Character:");
    scanf("%c",& ch);

    if((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'))
    {

        printf("True.");
    }
    else
    {
        printf("False.");

    }
    getch();
    return 0;
}
