#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7]={}, i = 0, min =0, max = 0;

    for(i = 0; i < 7; i++)
    {
        printf("Enter the value of %d Element :",i+1);
        scanf("%d",&Arr[i]);
    }

    printf("\n\n");


    for( i = 0; i < 7; i++)
    {
    if( i == 0 || Arr[i] > max)
    {
        max =Arr[i];
    }
 }

    for( i = 0; i < 7; i++)
    {
        if(i == 0 || Arr[i] < min)
        {
            min = Arr[i];
        }
    }
    getch();

    printf("\n\n maximum Array Element is:%d",max);
    printf("\n\n minimum array Element is:%d",min);

    getch();
    return 0;


}
