#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7]={},i = 0, max =0;

    for( i = 0; i < 7; i++)
    {
         printf("Enter value of %d Element:",i+1);
         scanf("%d",&Arr[i]);

        }

   getch();
   printf("\n\n");



for( i = 0; i < 7; i++)
{
    if(Arr[i] == 0 || Arr[i] > max)
    {
        max = Arr[i];
    }
}
    getch();

    printf("\n\n maximum Array Element is:%d",max);

    getch();
    return 0;

}

