#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7]={},i = 0, min = 0;

    for(i = 0; i < 7; i++)
    {
        printf("Enter the  value of %d Element :",i+1);
        scanf("%d",&Arr[i]);
    }
    getch();
    printf("\n\n");

    for( i = 0; i < 7; i++)
        if( i == 0 || Arr[i] < min)
    {
        min = Arr[i];
    }
    getch();

    printf("\n\n minimum Array Element is:%d",min);

    getch();
    return 0;


}









