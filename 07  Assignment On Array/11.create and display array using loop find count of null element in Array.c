#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7]={}, i = 0, cnt = 0;

    for(i = 0; i < 7; i++)
    {
        printf("Enter value of %d Element:",i+1);
        scanf("%d",&Arr[i]);
    }
    getch();
    printf("\n\n");

    for( i = 0; i < 7; i++)
    {
        printf("\n value of %d Element is:%d",i+1,Arr[i]);

        if(Arr[i] == 0)
        {

            cnt++;
        }
    }
    getch();

    printf("\n\n Zero Count in the Array is:%d",cnt);

    getch();
    return 0;
}
