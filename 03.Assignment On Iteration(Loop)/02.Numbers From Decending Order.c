
///Write a program that uses a loop to print the numbers from 10 to 1 in descending order.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i =0;

    for(i=10; i>=1; i--)
    {
        printf("\n %d",i);
    }
    getch();
    return 0;
}
