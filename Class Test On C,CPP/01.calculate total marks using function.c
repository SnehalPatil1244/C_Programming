/// Write a program to calculate total using function

#include<stdio.h>
#include<conio.h>

int calc_total(int a, int b, int c)
{
    return a + b + c;
}

int main()
{

    int phy = 0, maths = 0, che = 0, total =0;

    printf("Enter Marks in Physics:\n");
    scanf("%d",&phy);
    printf("Enter marks in Maths:\n");
    scanf("%d",&maths);
    printf("Enter marks in Che:\n");
    scanf("%d",&che);

    total = calc_total(phy,maths,che);

    printf("\n Total of All Subject Marks is :%d",total);

    getch();
    return 0;
}
