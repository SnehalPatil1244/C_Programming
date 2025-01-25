#include<stdio.h>
#include<conio.h>

int main()
{

    int number =0, Square=0;

    printf("Enter the Number:");
    scanf("%d",&number);

    Square = number*number;

    printf("Square of number:%d",Square);

    getch();
    return 0;
}
