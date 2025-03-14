#include<stdio.h>
#include<conio.h>

int main()
{

    float Distance=0.0,meter=0,  Kilometer=0;

    printf("Distance:");
    scanf("%f",&Kilometer);

    meter = Kilometer*1000;

    printf("Distance in meter:%f meters",meter);
    getch();
    return 0;

}
