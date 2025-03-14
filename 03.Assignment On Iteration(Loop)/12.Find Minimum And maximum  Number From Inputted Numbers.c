///Write Program to find minimum & maximum no. from 10 inputted numbers

#include<stdio.h>
#include<conio.h>

void main()
{
    int i = 0 , num , min , max;

    for(i=1; i<=10; i++)
    {
        printf("enter A Number :");
        scanf("%d",&num);


        if(num > max)
        {
            max = num;
        }
        if(num < min)
        {
                min = num;
        }

    }
    printf("\nMaximum Number is: %d ",max);
    printf("\nMinimum Number is : %d ",min);

    getch();
    return 0;
}
