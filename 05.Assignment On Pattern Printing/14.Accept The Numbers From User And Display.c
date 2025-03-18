
/* Print :
5  30  55  80
10 35  60  85
15 40  65  90
20 45  70  95
25 50  75  100 */

#include<stdio.h>
#include<conio.h>

int main ()
{
    int R = 0, C = 0, Rcnt =0, Ccnt = 0, Num =5;

    printf("Enter Row Count :");
    scanf("%d",&Rcnt);

    printf("Enter Colunm Count :");
    scanf("%d",&Ccnt);

    for(R = 1; R <= Rcnt; R++)
    {
        for(C = 1; C <= Ccnt;C++)
        {
            printf("%4d",Num);
            Num += 5;
        }
        printf("\n");
    }

    getch();
    return 0;
}
