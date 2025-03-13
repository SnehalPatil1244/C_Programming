///. Write Program to display table of numbers of any given range (forward or reverse).
#include<stdio.h>
#include<conio.h>

void main()
{
    int row =0,col =0, sp =0, ep =0;
    printf("Enter Starting Point :");
    scanf("%d",&sp);
    printf("Enter Ending Point :");
    scanf("%d",&ep);

    if(sp < ep)
    {
        for( row = 1; row<=10;row++ )
        {
            for(col = sp; col<=ep; col++)
            {
                        row * col;
                        printf("%4d",row * col);

            }
            printf("\n");
        }
    }
    else
        for(row =1 ; row <=10; row++)
    {
        for(col = sp; col >= ep; col--)
        {
            row * col;
            printf("%4d",row * col);
        }
        printf("\n");
    }
    getch();
    return 0;
}
