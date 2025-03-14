///. Write Program to display tables in range 27 to 19.
#include<stdio.h>
#include<conio.h>

void main()
{
    int col = 0, row = 0;

    printf("Table in Range 27 to 19 is : ");
    printf("\n\n");

    for( row =1 ; row<=10 ; row++)
    {
        for(col = 27 ; col>=19 ; col--)
        {
            row * col;
            printf("%4d",row*col);
        }
        printf("\n");
    }
    getch();
    return 0;
}
