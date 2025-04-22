#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char Fstr[20] = {'\0'};
    char Sstr[20] = {'\0'};

    puts("Enter The First String :");
    gets(Fstr);

    strcpy(Sstr, Fstr);

    getch();

    printf("\n First String Is %s !!!",Fstr);
    printf("\n Second String After Copy First String %s $$$",Sstr);

    getch();
    return 0;

}
