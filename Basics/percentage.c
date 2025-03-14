#include<stdio.h>
#include<conio.h>
int main()
{
int sub1 , sub2, sub3, totalmarks; float percentage;

printf("Enter Marks in sub1:");
scanf("%d",&sub1);

printf("Enter marks in sub2:");
scanf("%d",&sub2);

printf("Enter Marks in sub3:");
scanf("%d",&sub3);


totalmarks = sub1 + sub2 + sub3;
percentage = (totalmarks/3);

printf("total marks : %d\n", totalmarks);
printf("percentage : %f\n", percentage);

return 0;







}
