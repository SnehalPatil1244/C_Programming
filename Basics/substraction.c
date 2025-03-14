#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1, Num2, Sub;

    printf("Enter Integer Number:");
    scanf("%d%d",&Num1,&Num2);

    Sub = Num1 - Num2;
    printf("The result of substracting number is:%d",Sub);
    getch();
}

