#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    char cDest[20] = "";
    int i = 0;

    printf("\n Enter A String :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        cDest[i] = cSrc[i];
        i++;
    }
    cDest[i] = '\0';

    printf("\n Given String Is : %s !!!",cSrc);
    printf("\n Copied To New String Is : %s $$$",cDest);

    getch();
    return 0;
}
