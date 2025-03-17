
///Write Program to find minimum no. from 7 inputted numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i =0, num =0, min ;

    for(i =1; i<=7; i++)
    {
        printf("Enter Number :");
        scanf("%d",&num);

        if(num < min)
        {
            min = num;
        }
    }

    printf("The Minimum Number is : %d ",min);

    getch();
    return 0;


}
