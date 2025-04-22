#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char str[30] = {'\0'};

    puts("Enter The String To Get Capitalize :");
    gets(str);

    printf("\n\n String Before Capitalize : %s",str);
    getch();

    strupr(str);

    printf("\n\n String After Capitalize : %s",str);

    getch();
    return 0;
}
