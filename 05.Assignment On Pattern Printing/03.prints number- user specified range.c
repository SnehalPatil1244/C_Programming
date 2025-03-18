/* print:
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4 */

#include<stdio.h>
#include<conio.h>

void main()
{
    int  R =0, C = 0, Rcnt = 0, Ccnt =0, Num =0;

    printf("\n Enter Row Count :");
    scanf("%d",&Rcnt);
    printf("\n Enter Colunm Count :");
    scanf("%d",&Ccnt);

    for(R = 1,Num =1;R <= Rcnt ;R++)
    {
       for(C=1; C <= Ccnt; C++,Num++)
       {
           printf("%2d",Num);

       }
       Num = 1;

        printf("\n");
    }

    getch();
    return 0;


}
