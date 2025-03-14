///Write Program to find maximum no. from 7 inputted numbers.
#include<stdio.h>
#include<conio.h>

void main()
{
    int  i =0, num =0 ,max =0;

    for(i=1;i<=7; i++)
    {

    printf("Enter Numbers:");
    scanf("%d",&num);

    if(num > max)
    {
        max = num;
    }

    }
    printf("The Maximum number Is : %d ", max);
    getch();
    return 0;
}
