#include<stdio.h>
#include<conio.h>

int main()
{

    float Height=0, Width=0, area=0;

    printf("Enter the Height:");
    scanf("%f",&Height);
    printf("Enter the Width:");
    scanf("%f",&Width);

    area = Height*Width;

    printf("area of recatangle is:%f",area);

    getch();
}
