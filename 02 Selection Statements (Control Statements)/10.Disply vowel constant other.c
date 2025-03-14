#include<stdio.h>
#include<conio.h>

int main()
{
    char ch =0;

    printf(" Enter a character:");
    scanf("%c",&ch);

    if((ch == 'a')||(ch == 'e')||(ch == 'i')||(ch == 'o')||(ch == 'u'))
    {
        printf("The Character %c is a vowel.",ch);
    }
    else if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
        {
            printf("The Character %c is a consonant.",ch);
        }
        else
        {
            printf("The character %c is other.",ch);
        }
        getch();
        return 0;
}
