#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char Fstr[30] = {'\0'};
    char Sstr[30] = {'\0'};

    puts("\n Enter The First String :");
    gets(Fstr);
    puts("\n Enter The Second String :");
    gets(Sstr);

    printf("\n First String Before Copy Is %s !!!",Fstr);
    printf("\n Second String Before Copy Is %s $$$",Sstr);

    getch();

    strncpy(Fstr,Sstr,4);

    printf("\n First String After Copy Is %s !!!",Fstr);
    printf("\n Second String After Copy Is %s $$$",Sstr);

    getch();
    return 0;

}
