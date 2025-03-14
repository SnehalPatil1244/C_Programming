#include<stdio.h>
#include<conio.h>

int main()
{

    float Area =0.0, Side =0;

    printf("Enter side:");
    scanf("%f",&Side);

    Area = Side*Side;

    printf("Area Of Square is: %f",Area);

    getch();
    return 0;

}
