#include<stdio.h>
#include<conio.h>

int main()
{

    int sub1=0, sub2=0, sub3=0,totalmarks=0;
    float percentage=0.0;

    printf("marks in subject1:");
    scanf("%d",&sub1);

    printf("marks in subject2:");
    scanf("%d",&sub2);

    printf("marks in subject3:");
    scanf("%d",&sub3);

    totalmarks = sub1 + sub2 + sub3 ;
    percentage = (totalmarks/3);

    printf("total marks : %d,",totalmarks);
    printf("percentage : %f",percentage);

    getch();
    return 0;
}
