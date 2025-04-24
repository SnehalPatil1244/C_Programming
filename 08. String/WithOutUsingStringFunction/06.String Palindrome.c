#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "";
    int i = 0, j = 0;

    printf("\n Enter  A String :");
    gets(cSrc);

    while(cSrc[j] != '\0')
    {
        j++;
    }

    j--;

    while(i < j)
    {
        if(cSrc[i] != cSrc[j])
        {
            break;
        }
        i++;
        j--;
    }
    if(i >= j)
    {
        printf("\n String Is palindrome..");
    }
    else
    {
        printf("\n String Is Not Palindrome..");
    }

    getch();
    return 0;


}
