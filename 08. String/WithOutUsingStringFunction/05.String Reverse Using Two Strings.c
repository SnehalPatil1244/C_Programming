#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    char cDest[20] = {'\0'};
    int i = 0, j = 0;

    printf("\n Enter A String :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }
    i--;
    while(cDest[j] < cSrc[i])
    {
        cDest[j] = cSrc[i];
        i--;
        j++;
    }

    printf("\n Reverse String Is : %s",cDest);

    getch();
    return 0;
}
