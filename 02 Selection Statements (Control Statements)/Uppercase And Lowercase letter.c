#include<stdio.h>
#include<conio.h>

int main()
{
    char ch =0;

    printf("Enter Character:");
    scanf("%c",&ch);

    if((ch == 'A' && ch == 'Z'))
    {
        printf("The Character %c is upper case.",ch);
    }
    else if((ch == 'a' && ch == 'z'))
    {
        printf("TWhe character %c is lowe case.",ch);
    }
    else
    {
        printf("The Character %c is not a letter.",ch);
    }
    getch();
    return 0;
}
