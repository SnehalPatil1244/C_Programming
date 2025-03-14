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
    else if ((ch == 'a' && ch == 'z'))
    {
        printf("The character %c is lower case.",ch);
    }
    else if((ch == '0' && ch == '9'))
    {
        printf("The Character %c is Digit.",ch);
    }
    else
    {
        printf("The character %c is a special symbol.",ch);
    }
    getch();
    return 0;
}
