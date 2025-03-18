

#include<stdio.h>
#include<stdio.h>

int main()
{
    int Num =0,Dig =0, Ocnt =0, Temp = 0;

    printf("Enter A Number :");
    scanf("%d",&Num);

    Temp = Num;
    while(Temp > 0)
    {
        Dig = Temp % 10;
        if(Dig % 2 != 0)
        {
            Ocnt++;
        }

        Temp = Temp / 10;


    }
    printf(" Even Count Of Digit %d = %d",Num,Ocnt);
    getch();
    return 0;
}


