#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char str[30] = {'\0'};

    puts("Enter The String To Get Lower Letter :");
    gets(str);

    printf("\n\n String Before Lower : %s",str);
    getch();

    strlwr(str);

    printf("\n\n String After Lower : %s",str);

    getch();
    return 0;
}
