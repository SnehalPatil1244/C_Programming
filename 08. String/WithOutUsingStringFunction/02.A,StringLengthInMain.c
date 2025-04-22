#include<stdio.h>
#include<conio.h>

int main()
{
    char str[30] = "";
    int i = 0;

    puts("Enter The String To Calculate The Length :");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '\0')
        {
            break;
        }
    }

    printf("\n\n Length Of Given String Is : %d",i);

    getch();
    return 0;
}
