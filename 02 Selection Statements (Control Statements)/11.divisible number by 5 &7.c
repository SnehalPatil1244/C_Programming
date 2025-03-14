#include<stdio.h>
#include<conio.h>

int main()
{

    int number =0;

    printf("Enter number:");
    scanf("%d",&number);

    if((number % 5 == 0)&&(number % 7 == 0))
    {

        printf("%d is  Divisible by 5 and 7.",number);
    }
    else
    {

        printf("%d is not Divisible by 5 and 7.",number);
    }
    getch();
    return 0;
}
