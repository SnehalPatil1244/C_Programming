
///. Write a program to calculate the sum of 10 numbers inputted by the user.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i =0 , a=0, sum =0;

    for(i=1;i<=10;i++)
    {
        printf("\nEnter Numbers :");
        scanf("\n%d",&a);

        sum = sum + a;

    }
    printf(" sum Of given 10 Number is : %d",sum);

    getch();
    return 0;

}

