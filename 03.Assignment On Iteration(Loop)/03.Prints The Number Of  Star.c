///Write a program to accept a number from the user and print that number of * on screen.

#include<stdio.h>
#include<conio.h>

int main()
{

    int i, num =0;
    printf("Enter A Number :");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
        printf("*",num);

    }
    getch();
    return 0;
}
