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
