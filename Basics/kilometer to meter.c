#include<stdio.h>
#include<conio.h>

int main()
{

    float kilometer = 0, meter = 0;

    printf("Distance in kilometer : ");
    scanf("%f",&kilometer);

    meter = kilometer * 1000;

    printf("Distance in meter :%f",meter);

    getch();
}
