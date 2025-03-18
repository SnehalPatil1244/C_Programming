

#include<stdio.h>
#include<stdio.h>

int main()
{
    int Num =0,Dig =0, Ocnt =0,Ecnt =0, Zcnt =0, Temp = 0;

    printf("Enter A Number :");
    scanf("%d",&Num);

    Temp = Num;
    while(Temp > 0)
    {
        Dig = Temp % 10;
        if(Dig % 2 == 0)
        {
            Ecnt++;
        }
        if(Dig % 2 != 0)
        {
            Ocnt++;
        }
        if(Dig == 0)
        {
            Zcnt++;
        }

        Temp = Temp / 10;


    }
    printf("\n Even Count Of Digit %d = %d",Num,Ecnt);
    printf("\n Odd Count Of Digit %d = %d",Num,Ocnt);
    printf("\n Zero Count Of Digit %d = %d",Num,Zcnt);
    getch();
    return 0;
}



