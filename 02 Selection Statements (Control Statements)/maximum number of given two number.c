#include<stdio.h>
#include<conio.h>

int main()
{

    int num1=0, num2=0;

    printf("Enter two Numbers:");
    scanf("%d%D",&num1,&num2);

    if(num1>num2)
    {
        printf("The greater number is:%d",num1);
    }
    else{
        printf("The Greater number is:%d",num2);
    }

    getch();
    return 0;
}
