///Write a program which accept two numbers from user and display first number in second number of times.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i =0, num1 =0,num2=0;

    printf("Enter A First Number :");
    scanf("%d",&num1);

    printf("Enter A Second Number :");
    scanf("%d",&num2);

    for(i=1; i<=num2;i++)

    {
        printf(" %d ",num1);

    }

        getch();
        return 0;


}
