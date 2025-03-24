<<<<<<< HEAD
///
#include<stdio.h>
#include<conio.h>

int main()
{
    int a[2][3],i,j,Sum = 0;

    printf("Enter Elements Of 2D Array:");
    for( i =0; i < 2; i++)
    {
        for(j =0; j< 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("Matrix Is :");
        for(i =0; i<2 ; i++)
        {
            for(j =0; j<3; j++)
            {
                printf("%d\t",a[i][j]);
                Sum = Sum +a[i][j];
            }
            printf("\n");
        }
        printf("\n Sum = %d",Sum);
    }
    getch();
    return 0;
}
=======
#include<stdio.h>
#include<conio.h>

int main()
{
    int a[2][3],i,j,Sum = 0;
    printf("Enter Elements Of 2D Array:");
    for( i =0; i < 2; i++)
    {
        for(j =0; j< 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("Matrix Is :");
        for(i =0; i<2 ; i++)
        {
            for(j =0; j<3; j++)
            {
                printf("%d\t",a[i][j]);
                Sum = Sum +a[i][j];
            }
            printf("\n");
        }
        printf("\n Sum = %d",Sum);
    }
    getch();
    return 0;
}
>>>>>>> b62dfd17daf8de14f404e664e924a3f603578452
