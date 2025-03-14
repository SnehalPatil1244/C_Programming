#include<stdio.h>
#include<conio.h>

int main()
{

    int number =0;

    printf("Enter number:");
    scanf("%d",&number);

    if(number % 7 == 0)
    {

        printf("%d is divisible by 7.",number);
    }
    else
    {
        printf("%d is not Divisible by 7.",number);
    }

    getch();
    return 0;
}
