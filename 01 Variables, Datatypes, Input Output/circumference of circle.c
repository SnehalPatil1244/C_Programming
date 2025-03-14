#include<stdio.h>
#include<conio.h>

int main()
{

    float radius =0.0, PI=3.14, circumference=0.0;

    printf("Enter Radius of circle:");
    scanf("%f",&radius);

    circumference=2*PI*radius;

    printf("circumference of circle is :%f",circumference);

    getch();
    return 0;
}
