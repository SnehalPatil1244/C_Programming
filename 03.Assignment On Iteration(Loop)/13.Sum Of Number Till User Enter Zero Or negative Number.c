
///Write Program to make sum of numbers till user enter zero or negative number.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i =0 , num = 0, sum  =0;

    for(;;)
    {
        printf("Enter A Number :");
        scanf("%d",&num);

        if(num <= 0)
        {
            break;
        }
        sum =sum + num;
    }

        printf("Sum = %d ",sum);

        getch();
        return 0;
}


