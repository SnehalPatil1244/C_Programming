<<<<<<< HEAD
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define size 5

void Accept_Student_Details();
void Display_Student_Details();

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
     int i = 0;
     struct stud std[size]={};

   printf("\n Enter Student Details =>");
   for( i = 0; i < size; i++)
   {
       Accept_Student_Details(&std[i]);
   }

       printf("\n Details Of Student =>");
       for( i = 0; i < size; i++)
       {
           Display_Student_Details(&std[i]);
       }

       printf("\n Thanks For Using This Application.....");

     getch();
     return 0;
 }

    Accept_Student_Details(struct stud *sPtr)
    {


     printf("\nEnter A Roll_No :");
     scanf("%d",&sPtr->Roll_No);

     printf("\nEnter A Name :");
     scanf("%s",&sPtr->Name);

     fflush(stdin);

     printf("\nEnter A Physics Marks :");
     scanf("%d",&sPtr->phy);

     printf("\nEnter A Chemistry Marks :");
     scanf("%d",&sPtr->chem);

     printf("\n Enter A Mathematics Marks :");
     scanf("%d",&sPtr->maths);

     sPtr->total = sPtr->phy + sPtr->chem + sPtr->maths;
     sPtr->per = (sPtr->total / 300)*100;

     return;
     }
     Display_Student_Details(struct stud *sPtr)
     {

     printf("\n=========================================");
     printf("\n Roll_No  =%d",sPtr->Roll_No);
     printf("\n Name     =%s",sPtr->Name);
     printf("\n total    =%f",sPtr->total);
     printf("\n Per      =%0.3f",sPtr->per);
     printf("\n==========================================");

     return;
     getch();


 }





=======
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define size 5

void Accept_Student_Details();
void Display_Student_Details();

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
     int i = 0;
     struct stud std[size]={};

   printf("\n Enter Student Details =>");
   for( i = 0; i < size; i++)
   {
       Accept_Student_Details(&std[i]);
   }

       printf("\n Details Of Student =>");
       for( i = 0; i < size; i++)
       {
           Display_Student_Details(&std[i]);
       }

       printf("\n Thanks For Using This Application.....");

     getch();
     return 0;
 }

    Accept_Student_Details(struct stud *sPtr)
    {


     printf("\nEnter A Roll_No :");
     scanf("%d",&sPtr->Roll_No);

     printf("\nEnter A Name :");
     scanf("%s",&sPtr->Name);

     fflush(stdin);

     printf("\nEnter A Physics Marks :");
     scanf("%d",&sPtr->phy);

     printf("\nEnter A Chemistry Marks :");
     scanf("%d",&sPtr->chem);

     printf("\n Enter A Mathematics Marks :");
     scanf("%d",&sPtr->maths);

     sPtr->total = sPtr->phy + sPtr->chem + sPtr->maths;
     sPtr->per = (sPtr->total / 300)*100;

     return;
     }
     Display_Student_Details(struct stud *sPtr)
     {

     printf("\n=========================================");
     printf("\n Roll_No  =%d",sPtr->Roll_No);
     printf("\n Name     =%s",sPtr->Name);
     printf("\n total    =%f",sPtr->total);
     printf("\n Per      =%0.3f",sPtr->per);
     printf("\n==========================================");

     return;
     getch();


 }





>>>>>>> 0151dfa5707bbcb0d50e2fdfd9e722231b879418
