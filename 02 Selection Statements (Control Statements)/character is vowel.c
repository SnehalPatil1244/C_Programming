#include<stdio.h>
#include<conio.h>

int main()
{

    char  ch =0;

    printf("Enter a character:");
    scanf("%c",&ch);

     if((ch == 'a')||(ch == 'e')||(ch == 'i')||(ch == 'o')||(ch == 'u'))
    {
        printf( "the character %c is a vowel.",ch);
    }
    else
    {
        printf("the character %c is a not vowel.",ch);
    }
    getch();
    return 0;
}
