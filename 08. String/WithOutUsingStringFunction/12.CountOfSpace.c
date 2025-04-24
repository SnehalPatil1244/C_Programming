#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20]={'\0'};
    int i = 0, Cnt = 0;

    printf("\n Enter A String :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] == ' ')
        {
            Cnt++;
        }
        i++;
    }

    printf("\n Count Of Spaces Is : %d",Cnt);

    getch();
    return 0;

}
