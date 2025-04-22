#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char str[30] = {'\0'};

    puts("Enter The String To Get Reverse Words :");
    gets(str);

    printf("\n\n String Before Reverse : %s",str);
    getch();

    strrev(str);

    printf("\n\n String After Reverse : %s",str);

    getch();
    return 0;
}
