#include<stdio.h>
#include<conio.h>

int main()
{
    char temp = '\0';
    char cSrc[20] = {'\0'};
    int i = 0, j = 0;

    printf("\n Enter A String :");
    gets(cSrc);

    while(cSrc[j] != '\0')
    {
        j++;
    }
    i--;

    while(i <  j)
    {
        temp = cSrc[j];
        cSrc[j] = cSrc[i];
        cSrc[i] = temp;

        j--;
        i++;
    }
    printf("\n After Reverse String Is : %s .",cSrc);

    getch();
    return 0;
}
