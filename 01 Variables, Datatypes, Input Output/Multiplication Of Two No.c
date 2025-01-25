#include<stdio.h>
#include<conio.h>

int main()
{

    int num1 = 0, num2 = 0, mul = 0;

    printf("first number:");
    scanf("%d",&num1);

    printf("Second number:");
    scanf("%d",&num2);

    mul = num1 * num2;

    printf("The Result Of multiplying %d and %d is :%d",num1,num2,mul);
    getch();
    return 0;


}
