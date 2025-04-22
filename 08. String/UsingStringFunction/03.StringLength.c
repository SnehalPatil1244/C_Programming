#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char str[30] = {'\0'};
    int Len = 0;

    puts("Enter String To Calculate The Length :");
    gets(str);

    Len = strlen(str);

    getch();

    printf("\n\n Length Of The String %s Is =  %d",str,Len);

    getch();
    return 0;
}
