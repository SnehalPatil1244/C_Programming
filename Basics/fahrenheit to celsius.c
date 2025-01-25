#include<stdio.h>
#include<conio.h>

int main()

{
    float Fa,Ce;

    printf("Enter Temprature in Fahrenheit:");
    scanf("%f",&Fa);

    Ce = (5.0/9.0) * (Fa - 32);

    printf("temprature in Celsius:%f",Ce);
    getch();
}
