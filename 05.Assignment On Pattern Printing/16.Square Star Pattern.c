/* Print :
* * * *
* * * *
* * * *
* * * * */

#include<stdio.h>
#include<conio.h>

int main()
{
    int R =0, C =0,Num =0;

    printf("Enter A NUmber :");
    scanf("%d",&Num);

    for(R = 1; R <= Num; R++)
    {
        for( C = 1; C <= Num; C++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
