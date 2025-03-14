///Write a program to print the reverse multiplication table of a given number.
#include<stdio.h>
#include<conio.h>

void main()
{
    int i = 0, num = 0 , mul =0;

    printf("Enter A Number :");
    scanf("%d",&num);

    for(i =10; i>=1; i--)
    {
        mul = num * i;
        printf("\n %3d * %3d = %3d",num,i,mul);
    }
    getch();
    return 0;
}
