

#include<stdio.h>
#include<stdio.h>

int main()
{
    int Num =0,Dig =0, Dmul =1, Temp = 0;

    printf("Enter A Number :");
    scanf("%d",&Num);

    Temp = Num;
    while(Temp > 0)
    {
        Dig = Temp % 10;
        Dmul = Dmul * Dig;
        Temp = Temp / 10;


    }
    printf("= %d",Dmul);
    getch();
    return 0;
}

