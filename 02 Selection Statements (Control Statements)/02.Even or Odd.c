#include<stdio.h>
#include<conio.h>

int main()
{

    int number =0;

    printf("Enter the number:\n");
    scanf("%d",&number);

    if(number % 2 == 0)
    {

        printf("%d is Even number.\n",number);

    }
    else
    {
        printf("%d is Odd number.\n",number);

    }
    getch();
    return 0;
}
