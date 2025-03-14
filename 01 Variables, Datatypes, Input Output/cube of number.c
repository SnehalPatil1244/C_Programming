#include<stdio.h>
#include<conio.h>

int main()
{

    int cube =0, number =0;

    printf("Enter the number:");
    scanf("%d",&number);

    cube = number*number*number;

    printf("cube of number is :%d",cube);
    getch();
    return 0;
}
