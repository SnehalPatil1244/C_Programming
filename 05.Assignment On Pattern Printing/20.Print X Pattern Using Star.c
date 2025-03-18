
/* Print Z
            * * * *
                *
              *
            * * * *    */

#include<stdio.h>
#include<conio.h>

int main()

{
    int R = 0, C =0, Num =0;

    printf("Enter A Number :");
    scanf("%d",&Num);

    for(R =0; R<=Num; R++)
    {
        for(C =0; C<=Num; C++)
        {
            if( R==1 || R + C == Num+1 || R==Num)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    getch();
    return 0 ;
}
