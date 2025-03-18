/* prints :
5 5 5 5
4 4 4 4
3 3 3 3
2 2 2 2
1 1 1 1 */

#include<stdio.h>
#include<conio.h>

void main()
{
    int R =0, C = 0, Rcnt =0, Ccnt =0, Num =0;

    printf("Enter Row Count :");
    scanf("%d",&Rcnt);
    printf("Enter Colunm Count :");
    scanf("%d",&Ccnt);

    for(R =0,Num =Rcnt; R < Rcnt;R++,Num--)
    {
        for(C =0 ;C < Ccnt;C++)
        {
            printf("%2d",Num);
        }
        printf("\n");

    }
    getch();
    return 0;
}
