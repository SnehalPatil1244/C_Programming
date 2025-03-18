/* print:

****
****
****
****
****  */


#include<stdio.h>
#include<conio.h>

void main()
{
    int R = 0,C = 0;

    for(R=1;R<=5;R++)
    {
        for(C=1; C<=4; C++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
