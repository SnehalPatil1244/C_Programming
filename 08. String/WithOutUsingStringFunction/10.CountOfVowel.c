#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0, Cnt =0;

    printf("\n Enter A String  :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if((cSrc[i] == 'A' ) || (cSrc[i] == 'a') || (cSrc[i] == 'E') || (cSrc[i] == 'e') || (cSrc[i] == 'I') || (cSrc[i] == 'i') || (cSrc[i] == 'O') || (cSrc[i] == 'o') || (cSrc[i] == 'U') || (cSrc[i] == 'u'))
        {
            Cnt++;
        }
        i++;
    }
    printf("\n Count Of Vowel Is : %d ",Cnt);

    getch();
    return 0;
}



