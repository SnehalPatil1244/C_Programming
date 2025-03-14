<<<<<<< HEAD
///. Write Program to print Fibonacci series from 0 to N, Accept N from user
#include<stdio.h>
#include<conio.h>

 void main()
 {
     int  num =0 ,first =0, Second =0, next =0;

     printf("Enter A Number :");
     scanf("%d",&num);

     Second = 1;
     while(first<= num)
     {
         printf(" %d ",first);
         next = first + Second;
         first = Second;
         Second = next;
     }
     getch();
     return 0;
 }
=======
///. Write Program to print Fibonacci series from 0 to N, Accept N from user
#include<stdio.h>
#include<conio.h>

 void main()
 {
     int  num =0 ,first =0, Second =0, next =0;

     printf("Enter A Number :");
     scanf("%d",&num);

     Second = 1;
     while(first<= num)
     {
         printf(" %d ",first);
         next = first + Second;
         first = Second;
         Second = next;
     }
     getch();
     return 0;
 }
>>>>>>> 0151dfa5707bbcb0d50e2fdfd9e722231b879418
