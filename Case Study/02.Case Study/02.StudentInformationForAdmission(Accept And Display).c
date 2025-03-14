<<<<<<< HEAD
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

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
     struct stud std;

     printf("\nEnter Student Details =>");
     printf("\nEnter A Roll_No :");
     scanf("%d",&std.Roll_No);

     printf("\nEnter A Name :");
     scanf("%s",&std.Name);

     fflush(stdin);

     printf("\nEnter A Physics Marks :");
     scanf("%d",&std.phy);

     printf("\nEnter A Chemistry Marks :");
     scanf("%d",&std.chem);

     printf("\n Enter A Mathematics Marks :");
     scanf("%d",&std.maths);

     std.total = std.phy + std.chem + std.maths;
     std.per = (std.total / 300)*100;


     printf("\n=========================================");
     printf("\n Roll_No  =%d",std.Roll_No);
     printf("\n Name     =%s",std.Name);
     printf("\n total    =%f",std.total);
     printf("\n Per      =%0.3f",std.per);
     printf("\n==========================================");

     printf("\n Thanks For Using This Application");

     getch();
     return 0;
 }
=======
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

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
     struct stud std;

     printf("\nEnter Student Details =>");
     printf("\nEnter A Roll_No :");
     scanf("%d",&std.Roll_No);

     printf("\nEnter A Name :");
     scanf("%s",&std.Name);

     fflush(stdin);

     printf("\nEnter A Physics Marks :");
     scanf("%d",&std.phy);

     printf("\nEnter A Chemistry Marks :");
     scanf("%d",&std.chem);

     printf("\n Enter A Mathematics Marks :");
     scanf("%d",&std.maths);

     std.total = std.phy + std.chem + std.maths;
     std.per = (std.total / 300)*100;


     printf("\n=========================================");
     printf("\n Roll_No  =%d",std.Roll_No);
     printf("\n Name     =%s",std.Name);
     printf("\n total    =%f",std.total);
     printf("\n Per      =%0.3f",std.per);
     printf("\n==========================================");

     printf("\n Thanks For Using This Application");

     getch();
     return 0;
 }
>>>>>>> 0151dfa5707bbcb0d50e2fdfd9e722231b879418
