#include<stdio.h>
#include<conio.h>
#define ArNo 8

int main()
{

    int i =0,Arr[ArNo]={},cnt =0;

    for(i = 0; i < ArNo; i++)
    {
        printf("Enter Value of %d index:",i);
        scanf("%d",&Arr[i]);
    }
    getch();
    printf("\n\n");

    for( i = 0; i < ArNo; i++, cnt++)
    {

        printf("value of %d index is :%d\n",i,Arr[i]);
    }
    getch();

    printf("\n\n Count of Element in Given Array:%d",cnt);
    getch();
    return 0;

}

