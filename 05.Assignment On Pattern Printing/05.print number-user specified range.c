/* print:
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
5 5 5 5 */

#include<stdio.h>
#include<conio.h>
void main()
{
    int R =0, C =0, Ccnt =0, Rcnt=0, Num =0;

    printf("Enter Row Count :");
    scanf("%d",&Rcnt);
    printf("Enter Colunm Count :");
    scanf("%d",&Ccnt);

    for(R =0,Num=1;R < Rcnt; R++,Num++)
    {
        for(C =0;C < Ccnt;C++ )
        {
            printf("%2d",Num);
        }
        printf("\n");
    }

    getch();
    return 0;
}



