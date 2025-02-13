#include<stdio.h>
#include<conio.h>

int main()
{

    int Arr[7]={};

    printf("Give value for Index 0 :");
    scanf("%d",&Arr[0]);
    printf("Give value for Index 1 :");
    scanf("%d",&Arr[1]);
    printf("Give value for Index 2 :");
    scanf("%d",&Arr[2]);
    printf("Give value for Index 3 :");
    scanf("%d", &Arr[3]);
    printf("Give value for Index 4 :");
    scanf("%d",&Arr[4]);
    printf("Give value for Index 5 :");
    scanf("%d",&Arr[5]);
    printf("Give value for Index 6 :");
    scanf("%d",&Arr[6]);

    getch();

    printf("\n\n value of index 0 is : %d\n" , Arr[0]);
    printf("value of index 1 is : %d\n" , Arr[1]);
    printf("value of index 2 is : %d\n" , Arr[2]);
    printf("value of index 3 is : %d\n ", Arr[3]);
    printf("value of index 4 is : %d\n" , Arr[4]);
    printf("value of index 5 is : %d\n" , Arr[5]);
    printf("value of index 6 is : %d\n" , Arr[6]);

    getch();
    return 0;
}
