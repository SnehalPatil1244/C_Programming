
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Stud

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
   struct Stud std;

   std.Roll_No = 60;
   strcpy (std.Name,"Snehal Patil.");
   std.phy=67;
   std.chem=87;
   std.maths=70;

   std.total=std.phy + std.chem + std.maths;
   std.per=(std.total/300) *100;


   printf("\n=====================================");
   printf("\n Roll_No  =%d",std.Roll_No);
   printf("\n Name     =%s",std.Name);
   printf("\n total    =%f",std.total);
   printf("\n per      =%0.3f",std.per);
   printf("\n=====================================");

   printf("\n Thanks For Using This Application");
   getch();
   return 0;

}


