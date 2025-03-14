///Write program to accept numbers from user as x and y and print x^y
#include<stdio.h>
#include<conio.h>

void main()

{
    int x =0, y =0, res =0, i =0;

    printf("Enter Value Of X :");
    scanf("%d",&x);
    printf("Enter Value Of Y :");
    scanf("%d",&y);

    for( i=1, res =1; i <=y; i++)
    {
        res = res * x;
    }
    printf("%d * %d = %d",x,y,res);

    getch();
    return 0;
}
