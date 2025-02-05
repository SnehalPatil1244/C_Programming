#include<stdio.h>
#include<conio.h>

int main()
{
    int year =0;

    printf("year:");
    scanf("%d",&year);

    if(year % 4 == 0)
    {
        printf("the year %d is a leap year.",year);

    }
    else
    {
        printf("the year %d is a not leap year.",year);

    }
    getch();
    return 0;

}
