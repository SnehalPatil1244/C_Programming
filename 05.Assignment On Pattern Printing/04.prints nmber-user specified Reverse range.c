/* print :
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1 */

#include<stdio.h>
#include<conio.h>

void main()
{
     int R = 0, C = 0, Rcnt =0,Ccnt =0,Num =0;

    printf("\n Enter Row Count :");
    scanf("%d",&Rcnt);
    printf("\n Enter Colunm Couunt :");
    scanf("%d",&Ccnt);

    for(R =1; R<=Rcnt; R++)
    {
        for(C = 1, Num=Ccnt ; C<=Ccnt;C++,Num--)
        {
            printf("%2d",Num);
        }
         printf("\n");
         Num = Ccnt;
    }
    getch();
    return 0;


}



