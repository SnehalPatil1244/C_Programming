
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num =0,Dig =0, Dsum =0, Temp =0;

    printf("Enter A Number :");
    scanf("%d",&Num);

    Temp = Num;
    while(Temp > 0)
    {
        Dig = Temp % 10;
        Dsum = Dsum + Dig;
        Temp = Temp / 10;

        printf("%d + ",Dig);
    }
    printf("= %d",Dsum);
    getch();
    return 0;
}
