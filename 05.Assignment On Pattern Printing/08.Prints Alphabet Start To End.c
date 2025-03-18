/* Print :
A B C D
E F G H
I J K L
M N O P
Q R S T */

#include<stdio.h>
#include<conio.h>

void main()
{
    int R = 0, C = 0, Rcnt =0, Ccnt = 0;
    char ch = '\0';

    printf("Enter Row Count :");
    scanf("%d",&Rcnt);
    printf("Enter Colunm Count :");
    scanf("%d",&Ccnt);

    printf("\n\n");
    ch = 'A';

    for(R =0; R < Rcnt; R++)
    {
        for(C =0; C <Ccnt ; C++)
        {
            printf("%3c",ch);
            ch++;
        }
        printf("\n");
    }
    getch();
    return 0;
    }
