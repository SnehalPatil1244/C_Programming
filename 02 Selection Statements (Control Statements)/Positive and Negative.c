#include<stdio.h>
#include<conio.h>

int main()
{

    int num =0;

        printf("Enter an Integer Number:");
        scanf("%d",&num);

         if(num > 0)
         {
             printf("The Given Number %d is Positive",num);


         }


    else
    {
        printf("The Given Number %d is Negative",num);

    }

    getch();
    return 0;
}
