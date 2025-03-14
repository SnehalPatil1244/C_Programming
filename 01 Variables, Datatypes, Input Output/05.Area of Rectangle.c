#include<stdio.h>
#include<conio.h>

int main()
{
    float Area=0.0, Height = 0, Width =0;

    printf("Enter The Width:");
    scanf("%f",&Width);

    printf("Enter The Height:");
    scanf("%f",&Height);

    Area=Width*Height;


    printf("Area of Rectangle :%f",Area);

    getch();
    return 0;
}
