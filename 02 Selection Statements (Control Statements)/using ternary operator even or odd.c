#include<stdio.h>
#include<conio.h>

int main()
{

    int number =0;

    printf("Enter number:");
    scanf("%d",&number);

    (number %2 ==0) ? printf("The Given number is Even.",number) : printf("The given number is odd.",number);

    getch();
    return 0;
}
