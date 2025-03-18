/* Print :
A A A A
B B B B
C C C C
D D D D
E E E E */

#include<stdio.h>
#include<conio.h>

void main()
{
    int R =0, C = 0, Rcnt = 0, Ccnt = 0;
    char ch ='\0';

    printf("Enter Row Count :");
    scanf("%d",&Rcnt);
    printf("Enter Colunm Count :");
    scanf("%d",&Ccnt);

    printf("\n\n");

    for(R = 0,ch = 'A'; R < Rcnt; R++,ch++)
    {
        for(C =0; C < Ccnt; C++)
        {
            printf("%2c",ch);
        }
        printf("\n");
    }
    getch();
    return 0;

}

