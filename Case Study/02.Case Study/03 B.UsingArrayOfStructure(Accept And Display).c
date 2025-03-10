#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define size 2

 struct stud
 {
     int Roll_No;
     char Name[40];
     int phy;
     int chem;
     int maths;
     float total;
     float per;

 };

 int main()
 {
     int i =0;
     struct stud std[size]={};

     printf("\nEnter Student Details =>");

     for(i =0; i < size ; i++)
     {

     printf("\nEnter A Roll_No :");
     scanf("%d",&std[i].Roll_No);

     printf("\nEnter A Name :");
     scanf("%s",&std[i].Name);

     fflush(stdin);

     printf("\nEnter A Physics Marks :");
     scanf("%d",&std[i].phy);

     printf("\nEnter A Chemistry Marks :");
     scanf("%d",&std[i].chem);

     printf("\n Enter A Mathematics Marks :");
     scanf("%d",&std[i].maths);

     std[i].total = std[i].phy + std[i].chem + std[i].maths;
     std[i].per = (std[i].total / 300)*100;
     }

     printf("\n\n Dtails Of Student =>");
     for(i = 0; i < size; i++)
     {


     printf("\n=========================================");
     printf("\n Roll_No  =%d",std[i].Roll_No);
     printf("\n Name     =%s",std[i].Name);
     printf("\n total    =%f",std[i].total);
     printf("\n Per      =%0.3f",std[i].per);
     printf("\n==========================================");
     }

     printf("\n Thanks For Using This Application");

     getch();
     return 0;
 }


