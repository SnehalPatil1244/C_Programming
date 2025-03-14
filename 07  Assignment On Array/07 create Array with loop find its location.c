#include<stdio.h>
#include<conio.h>

 int main()
 {
     int i =0, Arr[7]={},srch =0;

     for(i=0; i < 7; i++)
     {

         printf("Enter value of %d Element:",i+1);
         scanf("%d",&Arr[i]);
     }
     getch();
     printf("\n\n");

     for(i = 0; i < 7; i++)
     {
         printf("value of Elements %d is :%d\n",i+1,Arr[1]);
     }
     printf("\n\n Enter number for search its location:");
     scanf("%d",&srch);

     for(i =0; i < 7; i++)
     {
         if(srch == Arr[1])
         {

             break;
         }
     }
     if (i < 7)
     {

         printf("Given Element %d Found on location %d",srch,i+1);
     }
     else
        {
        printf("Element %d not found Enter another Element---",srch);
     }
     getch();
     return 0;

 }

