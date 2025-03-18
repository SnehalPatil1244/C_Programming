/* Print:
1  2  3  4
5  6  7  8
9  10 11 12
13 14 15 16
17 18 19 20 */

#include<stdio.h>
#include<conio.h>

void main()
{
    int R = 0, C = 0, Rcnt =0, Ccnt = 0, Num =0;

    printf("Enter Row Count :");
    scanf("%d",&Rcnt);
    printf("Enter Colunm Count :");
    scanf("%d",&Ccnt);

    printf("\n\n");
    Num =1;

    for(R =0; R < Rcnt; R++)
    {
        for(C =0; C < Ccnt;C++)
        {
            printf("%3d",Num);
            Num++;
        }
        printf("\n");
    }
    getch();
    return 0;
}
