#include<stdio.h>
#include<conio.h>

int main()
{

    float meter = 0, kilometer = 0;

    printf("Distance in meter:",meter);
    scanf("%f",&meter);

    meter /=1000;

    printf("Distance in kilometer:%f",meter);
    getch();
}
