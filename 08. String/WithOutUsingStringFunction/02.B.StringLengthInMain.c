#include<stdio.h>
#include<conio.h>

int main()
{
    char str[30] = "";
    int i = 0;

    puts("Enter The String To Calculate The Length :");
    gets(str);

    while(str[i] != '\0')
    {
        i++;
    }

    printf("\n\n Length Of Given String Is : %d",i);

    getch();
    return 0;
}

