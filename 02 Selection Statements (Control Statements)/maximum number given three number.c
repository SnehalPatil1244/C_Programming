#include<stdio.h>
#include<conio.h>

int main()
{

    int num1=0,num2=0, num3=0;

    printf("Enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);

    if((num1>num2) && (num1>num3))
    {
        printf("The Greater number is:%d",num1);
    }
    else if((num2>num1) &&(num2>num3))
    {

        printf("The grater number is:%d",num2);
    }
    else
        {
            printf("The grater number is :%d",num3);

    }
    getch();
    return 0;
}
