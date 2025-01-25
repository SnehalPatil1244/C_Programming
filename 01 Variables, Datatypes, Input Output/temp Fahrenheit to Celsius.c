#include<stdio.h>
#include<conio.h>

int main()
{

    float Fahrenheit=0,Celsius=0;

    printf("Temprature:");
    scanf("%f",&Fahrenheit);

    (Celsius = (Fahrenheit-32)*(5.0/9.0));

    printf("Temprature in celsius:%f",Celsius);
    getch();
    return 0;


}
