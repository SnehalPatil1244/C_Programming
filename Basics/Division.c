#include<stdio.h>
#include<conio.h>

int main()
{

    int num1=0,num2=0,Div=0;

    printf("Enter first Numbers:");
    scanf("%d",&num1);
    printf("Enter second Number:");
    scanf("%d",&num2);

    Div=num1/num2;
    printf(" Division of two numbers:%d",Div);

    getch();
}
