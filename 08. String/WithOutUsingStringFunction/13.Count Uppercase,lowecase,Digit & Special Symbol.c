#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0, Ucnt = 0, Lcnt = 0,Dcnt = 0 ,SPcnt = 0;

    printf("\n Enter A String :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if((cSrc[i] >= 'A') && (cSrc[i] <= 'Z'))
        {
            Ucnt++;
        }
        else if((cSrc[i] >= 'a') && (cSrc[i] <= 'z'))
        {
            Lcnt++;
        }
        else if((cSrc[i] >= '0') && (cSrc[i] <= '9'))
        {
            Dcnt++;
        }
        else
        {
            SPcnt++;
        }
        i++;
    }
    printf("\n Count Of Capital Letter : %d",Ucnt);
    printf("\n Count Of Lower Letters : %d",Lcnt);
    printf("\n Count Of Digit Letters : %d",Dcnt);
    printf("\n Count Of Special Symbols : %d",SPcnt);

    getch();
    return 0;
}
